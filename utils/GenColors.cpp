// ConsoleApplication8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include "farver-2.1.1/src/ColorSpace.h"
#include "fstream"
#include <fmt/format.h>
using namespace ColorSpace;
using namespace std;
// white-6
// dark-6
// red-3
// rose-3
// orange-3
// yellow-3
// violet-3
// fuchsia-3
// cyan-3
// yellowgreen-3
// lightblue-3
// blue-3
// green-3
// Strong blue
const char* genZero_LCH_SB_0_Output = "X:/Repositories/VSZeroUtils/GenColors/x64/Release/Zero_LCH_SB_0";
const char* genZero_LCH_WB_0_Output = "X:/Repositories/VSZeroUtils/GenColors/x64/Release/Zero_LCH_WB_0";
const char* genZero_LCH_SB_1_Output = "X:/Repositories/VSZeroUtils/GenColors/x64/Release/Zero_LCH_SB_1";
const char* genZero_LCH_WB_1_Output = "X:/Repositories/VSZeroUtils/GenColors/x64/Release/Zero_LCH_WB_1";

// Strong blue
void genZero_LCH_SB_0()
{
	// White

	constexpr double topWhiteL = 0.97;
	constexpr double lowWhiteL = 0.35;

	constexpr double whiteAC = 0.03;
	constexpr double whiteBC = 0.06;

	constexpr double difWhiteL = (topWhiteL - lowWhiteL) / 5;

	// Dark

	constexpr double topDarkL = 0.22;
	constexpr double lowDarkL = 0.18;

	constexpr double darkAC = 0.014;
	constexpr double darkBC = 0.014;
	constexpr double darkCC = 0.014;
	constexpr double darkDC = 0.010;

	constexpr double difDarkL = (topDarkL - lowDarkL) / 5;

	// Color
	constexpr double topColorL = topWhiteL - (difWhiteL * 2) - 0.05;
	constexpr double lowColorL = topDarkL;
	constexpr double difColorL = (topColorL - lowColorL) / 3;

	constexpr double colorAC = 0.13;
	constexpr double colorBC = 0.09;
	constexpr double colorCC = 0.07;

	auto genWhite = [=](double Hue) -> vector<OkLch>
	{
		double topl = topWhiteL;
		double ldif = difWhiteL;

		return {
			OkLch(topl - ldif * 0, whiteAC, Hue),
			OkLch(topl - ldif * 1, whiteAC, Hue),
			OkLch(topl - ldif * 2, whiteAC, Hue),
			OkLch(topl - ldif * 3, whiteBC, Hue),
			OkLch(topl - ldif * 4, whiteBC, Hue),
			OkLch(topl - ldif * 5, whiteBC, Hue)
		};
	};
	auto genDark = [=](double Hue) -> vector<OkLch>
	{
		double topl = topDarkL;
		double ldif = difDarkL;

		return {
			OkLch(topl - ldif * 0, darkAC, Hue),
			OkLch(topl - ldif * 1, darkAC, Hue),
			OkLch(topl - ldif * 2, darkBC, Hue),
			OkLch(topl - ldif * 3, darkBC, Hue),
			OkLch(topl - ldif * 4, darkCC, Hue),
			OkLch(topl - ldif * 5, darkDC, Hue)
		};
	};
	auto genColor = [=](double Hue) -> vector<OkLch>
	{
		double topl = topColorL;
		double ldif = difColorL;

		return {
			OkLch(topl - ldif * 0, colorAC, Hue),
			OkLch(topl - ldif * 1, colorBC, Hue),
			OkLch(topl - ldif * 2, colorCC, Hue)
		};
	};
	ofstream outputFile(genZero_LCH_SB_0_Output);
	{
		auto red = genColor(25);
		auto rose = genColor(0);
		auto orange = genColor(45);
		auto yellow = genColor(90);
		auto violet = genColor(290);
		auto fuchsia = genColor(330);
		auto cyan = genColor(200);
		auto yellowgreen = genColor(130);
		auto lightblue = genColor(235);
		auto blue = genColor(265);
		auto green = genColor(170);

		double Hue = 265;
		auto white = genWhite(Hue);
		auto dark = genDark(Hue);
		auto toOutput = [&outputFile](vector<OkLch>& colors)
		{
			for (auto& it : colors)
			{
				Rgb color;
				OkLchConverter::ToColor(&color, &it);
				color.Cap();
#ifdef _DEBUG
				string colorStr = fmt::format("#{:02X}{:02X}{:02X},", (uint8_t)(color.r), (uint8_t)(color.g), (uint8_t)(color.b));
				outputFile << colorStr;
#else
				string colorStr = fmt::format("{:02X}{:02X}{:02X}\"", (uint8_t)(color.r), (uint8_t)(color.g),
				                              (uint8_t)(color.b));
				outputFile << colorStr << "\n";
#endif
			}
		};
		toOutput(white);
		toOutput(dark);
		toOutput(red);
		toOutput(rose);
		toOutput(orange);
		toOutput(yellow);
		toOutput(violet);
		toOutput(fuchsia);
		toOutput(cyan);
		toOutput(yellowgreen);
		toOutput(lightblue);
		toOutput(blue);
		toOutput(green);
	}
	outputFile.close();
#ifndef _DEBUG
	std::system("cd X:/Repositories/VSZeroUtils/GenColors/x64/Debug & colorremap.exe baseZeroOne.vstheme X:/Repositories/VSZero/src/ZeroOne.vstheme");
#endif
}

// Weak blue
void genZero_LCH_WB_0()
{
	// White

	constexpr double topWhiteL = 0.975;
	constexpr double lowWhiteL = 0.375;

	constexpr double whiteAC = 0.0125;
	constexpr double whiteBC = 0.0325;

	constexpr double difWhiteL = (topWhiteL - lowWhiteL) / 5;

	// Dark

	constexpr double topDarkL = 0.26;
	constexpr double lowDarkL = 0.18;

	constexpr double darkAC = 0.006;
	constexpr double darkBC = 0.006;
	constexpr double darkCC = 0.006;
	constexpr double darkDC = 0.004;

	constexpr double difDarkL = (topDarkL - lowDarkL) / 5;

	// Color
	constexpr double topColorL = topWhiteL - (difWhiteL * 2) - 0.04;
	constexpr double lowColorL = topDarkL;
	constexpr double difColorL = (topColorL - lowColorL) / 3;

	constexpr double colorAC = 0.13;
	constexpr double colorBC = 0.09;
	constexpr double colorCC = 0.07;

	auto genWhite = [=](double Hue) -> vector<OkLch>
	{
		double topl = topWhiteL;
		double ldif = difWhiteL;

		return {
			OkLch(topl - ldif * 0, whiteAC, Hue),
			OkLch(topl - ldif * 1, whiteAC, Hue),
			OkLch(topl - ldif * 2, whiteAC, Hue),
			OkLch(topl - ldif * 3, whiteBC, Hue),
			OkLch(topl - ldif * 4, whiteBC, Hue),
			OkLch(topl - ldif * 5, whiteBC, Hue)
		};
	};
	auto genDark = [=](double Hue) -> vector<OkLch>
	{
		double topl = topDarkL;
		double ldif = difDarkL;

		return {
			OkLch(topl - ldif * 0, darkAC, Hue),
			OkLch(topl - ldif * 1, darkAC, Hue),
			OkLch(topl - ldif * 2, darkBC, Hue),
			OkLch(topl - ldif * 3, darkBC, Hue),
			OkLch(topl - ldif * 4, darkCC, Hue),
			OkLch(topl - ldif * 5, darkDC, Hue)
		};
	};
	auto genColor = [=](double Hue) -> vector<OkLch>
	{
		double topl = topColorL;
		double ldif = difColorL;

		return {
			OkLch(topl - ldif * 0, colorAC, Hue),
			OkLch(topl - ldif * 1, colorBC, Hue),
			OkLch(topl - ldif * 2, colorCC, Hue)
		};
	};
	ofstream outputFile(genZero_LCH_WB_0_Output);
	{
		auto red = genColor(25);
		auto rose = genColor(0);
		auto orange = genColor(45);
		auto yellow = genColor(90);
		auto violet = genColor(290);
		auto fuchsia = genColor(330);
		auto cyan = genColor(200);
		auto yellowgreen = genColor(130);
		auto lightblue = genColor(235);
		auto blue = genColor(265);
		auto green = genColor(170);

		double Hue = 265;
		auto white = genWhite(Hue);
		auto dark = genDark(Hue);
		auto toOutput = [&outputFile](vector<OkLch>& colors)
		{
			for (auto& it : colors)
			{
				Rgb color;
				OkLchConverter::ToColor(&color, &it);
				color.Cap();
#ifdef _DEBUG
					string colorStr = fmt::format("#{:02X}{:02X}{:02X},", (uint8_t)(color.r), (uint8_t)(color.g), (uint8_t)(color.b));
					outputFile << colorStr;
#else
				string colorStr = fmt::format("{:02X}{:02X}{:02X}\"", (uint8_t)(color.r), (uint8_t)(color.g),
				                              (uint8_t)(color.b));
				outputFile << colorStr << "\n";
#endif
			}
		};
		toOutput(white);
		toOutput(dark);
		toOutput(red);
		toOutput(rose);
		toOutput(orange);
		toOutput(yellow);
		toOutput(violet);
		toOutput(fuchsia);
		toOutput(cyan);
		toOutput(yellowgreen);
		toOutput(lightblue);
		toOutput(blue);
		toOutput(green);
	}
	outputFile.close();
#ifndef _DEBUG
	std::system("cd X:/Repositories/VSZeroUtils/GenColors/x64/Debug & colorremap.exe baseZeroTwo.vstheme X:/Repositories/VSZero/src/ZeroTwo.vstheme");
#endif
}

// Ligther Dark | Strong blue
void genZero_LCH_SB_1()
{
	// White

	constexpr double topWhiteL = 0.98;
	constexpr double lowWhiteL = 0.4;

	constexpr double whiteAC = 0.03;
	constexpr double whiteBC = 0.06;

	constexpr double difWhiteL = (topWhiteL - lowWhiteL) / 5;

	// Dark

	constexpr double topDarkL = 0.28;
	constexpr double lowDarkL = 0.22;

	constexpr double darkAC = 0.014;
	constexpr double darkBC = 0.014;
	constexpr double darkCC = 0.014;
	constexpr double darkDC = 0.010;

	constexpr double difDarkL = (topDarkL - lowDarkL) / 5;

	// Color
	constexpr double topColorL = topWhiteL - (difWhiteL * 2) - 0.04;
	constexpr double lowColorL = topDarkL;
	constexpr double difColorL = (topColorL - lowColorL) / 3;

	constexpr double colorAC = 0.13;
	constexpr double colorBC = 0.09;
	constexpr double colorCC = 0.07;

	auto genWhite = [=](double Hue) -> vector<OkLch>
	{
		double topl = topWhiteL;
		double ldif = difWhiteL;

		return {
			OkLch(topl - ldif * 0, whiteAC, Hue),
			OkLch(topl - ldif * 1, whiteAC, Hue),
			OkLch(topl - ldif * 2, whiteAC, Hue),
			OkLch(topl - ldif * 3, whiteBC, Hue),
			OkLch(topl - ldif * 4, whiteBC, Hue),
			OkLch(topl - ldif * 5, whiteBC, Hue)
		};
	};
	auto genDark = [=](double Hue) -> vector<OkLch>
	{
		double topl = topDarkL;
		double ldif = difDarkL;

		return {
			OkLch(topl - ldif * 0, darkAC, Hue),
			OkLch(topl - ldif * 1, darkAC, Hue),
			OkLch(topl - ldif * 2, darkBC, Hue),
			OkLch(topl - ldif * 3, darkBC, Hue),
			OkLch(topl - ldif * 4, darkCC, Hue),
			OkLch(topl - ldif * 5, darkDC, Hue)
		};
	};
	auto genColor = [=](double Hue) -> vector<OkLch>
	{
		double topl = topColorL;
		double ldif = difColorL;

		return {
			OkLch(topl - ldif * 0, colorAC, Hue),
			OkLch(topl - ldif * 1, colorBC, Hue),
			OkLch(topl - ldif * 2, colorCC, Hue)
		};
	};
	ofstream outputFile(genZero_LCH_SB_1_Output);

	{
		auto red = genColor(25);
		auto rose = genColor(0);
		auto orange = genColor(45);
		auto yellow = genColor(90);
		auto violet = genColor(290);
		auto fuchsia = genColor(330);
		auto cyan = genColor(200);
		auto yellowgreen = genColor(130);
		auto lightblue = genColor(235);
		auto blue = genColor(265);
		auto green = genColor(170);

		double Hue = 265;
		auto white = genWhite(Hue);
		auto dark = genDark(Hue);
		auto toOutput = [&outputFile](vector<OkLch>& colors)
		{
			for (auto& it : colors)
			{
				Rgb color;
				OkLchConverter::ToColor(&color, &it);
				color.Cap();
#ifdef _DEBUG
					string colorStr = fmt::format("#{:02X}{:02X}{:02X},", (uint8_t)(color.r), (uint8_t)(color.g), (uint8_t)(color.b));
					outputFile << colorStr;
#else
				string colorStr = fmt::format("{:02X}{:02X}{:02X}\"", (uint8_t)(color.r), (uint8_t)(color.g),
				                              (uint8_t)(color.b));
				outputFile << colorStr << "\n";
#endif
			}
		};
		toOutput(white);
		toOutput(dark);
		toOutput(red);
		toOutput(rose);
		toOutput(orange);
		toOutput(yellow);
		toOutput(violet);
		toOutput(fuchsia);
		toOutput(cyan);
		toOutput(yellowgreen);
		toOutput(lightblue);
		toOutput(blue);
		toOutput(green);
	}

	outputFile.close();
#ifndef _DEBUG
	std::system("cd X:/Repositories/VSZeroUtils/GenColors/x64/Debug & colorremap.exe baseZeroX.vstheme X:/Repositories/VSZero/src/ZeroX.vstheme");
#endif
}

// Lighter Dark | Weak Blue
void genZero_LCH_WB_1()
{
	// White

	constexpr double topWhiteL = 0.98;
	constexpr double lowWhiteL = 0.4;

	constexpr double whiteAC = 0.0125;
	constexpr double whiteBC = 0.0325;

	constexpr double difWhiteL = (topWhiteL - lowWhiteL) / 5;

	// Dark

	constexpr double topDarkL = 0.28;
	constexpr double lowDarkL = 0.22;

	constexpr double darkAC = 0.006;
	constexpr double darkBC = 0.006;
	constexpr double darkCC = 0.006;
	constexpr double darkDC = 0.004;

	constexpr double difDarkL = (topDarkL - lowDarkL) / 5;

	// Color
	constexpr double topColorL = topWhiteL - (difWhiteL * 2) - 0.05;
	constexpr double lowColorL = topDarkL;
	constexpr double difColorL = (topColorL - lowColorL) / 3;

	constexpr double colorAC = 0.13;
	constexpr double colorBC = 0.09;
	constexpr double colorCC = 0.07;

	auto genWhite = [=](double Hue) -> vector<OkLch>
	{
		double topl = topWhiteL;
		double ldif = difWhiteL;

		return {
			OkLch(topl - ldif * 0, whiteAC, Hue),
			OkLch(topl - ldif * 1, whiteAC, Hue),
			OkLch(topl - ldif * 2, whiteAC, Hue),
			OkLch(topl - ldif * 3, whiteBC, Hue),
			OkLch(topl - ldif * 4, whiteBC, Hue),
			OkLch(topl - ldif * 5, whiteBC, Hue)
		};
	};
	auto genDark = [=](double Hue) -> vector<OkLch>
	{
		double topl = topDarkL;
		double ldif = difDarkL;

		return {
			OkLch(topl - ldif * 0, darkAC, Hue),
			OkLch(topl - ldif * 1, darkAC, Hue),
			OkLch(topl - ldif * 2, darkBC, Hue),
			OkLch(topl - ldif * 3, darkBC, Hue),
			OkLch(topl - ldif * 4, darkCC, Hue),
			OkLch(topl - ldif * 5, darkDC, Hue)
		};
	};
	auto genColor = [=](double Hue) -> vector<OkLch>
	{
		double topl = topColorL;
		double ldif = difColorL;

		return {
			OkLch(topl - ldif * 0, colorAC, Hue),
			OkLch(topl - ldif * 1, colorBC, Hue),
			OkLch(topl - ldif * 2, colorCC, Hue)
		};
	};
	ofstream outputFile(genZero_LCH_WB_1_Output);

	{
		auto red = genColor(25);
		auto rose = genColor(0);
		auto orange = genColor(45);
		auto yellow = genColor(90);
		auto violet = genColor(290);
		auto fuchsia = genColor(330);
		auto cyan = genColor(200);
		auto yellowgreen = genColor(130);
		auto lightblue = genColor(235);
		auto blue = genColor(265);
		auto green = genColor(170);

		double Hue = 265;
		auto white = genWhite(Hue);
		auto dark = genDark(Hue);
		auto toOutput = [&outputFile](vector<OkLch>& colors)
		{
			for (auto& it : colors)
			{
				Rgb color;
				OkLchConverter::ToColor(&color, &it);
				color.Cap();
#ifdef _DEBUG
					string colorStr = fmt::format("#{:02X}{:02X}{:02X},", (uint8_t)(color.r), (uint8_t)(color.g), (uint8_t)(color.b));
					outputFile << colorStr;
#else
				string colorStr = fmt::format("{:02X}{:02X}{:02X}\"", (uint8_t)(color.r), (uint8_t)(color.g),
				                              (uint8_t)(color.b));
				outputFile << colorStr << "\n";
#endif
			}
		};
		toOutput(white);
		toOutput(dark);
		toOutput(red);
		toOutput(rose);
		toOutput(orange);
		toOutput(yellow);
		toOutput(violet);
		toOutput(fuchsia);
		toOutput(cyan);
		toOutput(yellowgreen);
		toOutput(lightblue);
		toOutput(blue);
		toOutput(green);
	}

	outputFile.close();
#ifndef _DEBUG
	std::system("cd X:/Repositories/VSZeroUtils/GenColors/x64/Debug & colorremap.exe baseZeroZ.vstheme X:/Repositories/VSZero/src/ZeroZ.vstheme");
#endif
}

int main()
{
	genZero_LCH_SB_0();
	genZero_LCH_WB_0();
	genZero_LCH_SB_1();
	genZero_LCH_WB_1();
	return 0;
}
