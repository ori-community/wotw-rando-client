#pragma once

#include <pch.h>
#include <set>

enum class MessageType : int
{
    Info,
    Warning,
    Error,
    Debug
};

const std::set<char> tree_abilities{ 0, 5, 8, 23, 51, 57, 62, 77, 97, 100, 101, 102, 103, 104, 117, 120, 121 };
const uint8_t GLIDE = 14;
const uint8_t DIGGING = 101;
const uint8_t DASH_NEW = 102;
const uint8_t WATER_DASH = 104;
