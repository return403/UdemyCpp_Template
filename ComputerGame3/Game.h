#pragma once
#include <cstdint>

constexpr static char LEFT1 = 'a';
constexpr static char LEFT2 = 'A';
constexpr static char RIGHT1 = 'd';
constexpr static char RIGHT2 = 'D';

constexpr static std::uint32_t LEN_X = 75;
constexpr static std::uint32_t START = 0;
constexpr static std::uint32_t GOAL = LEN_X - 1;

void game();
