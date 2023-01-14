#pragma once

#include "ext.h"
#include <INIReader.h>
#include <fstream>
#include <memory>
#include <sstream>

#ifndef NO_MODLOADER
#include <Modloader/modloader.h>
#endif

#include <codecvt>
#include <locale>

// Delete this once settings are stored in UTF-8 JSON
std::unique_ptr<INIReader> read_utf16_ini(const std::string& path) {
    std::ifstream stream(path, std::ios::binary);
    stream.seekg(0, std::ios::end);

    auto length = stream.tellg();

    // Skip BOM
    stream.seekg(2);
    length -= 2;

    std::u16string u16((length / 2) + 1, '\0');
    stream.read((char*)&u16[0], length);

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    std::string utf8 = std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t>{}.to_bytes(u16);
#pragma clang diagnostic pop

    auto reader = std::make_unique<INIReader>(utf8.c_str(), utf8.length());

#ifndef NO_MODLOADER
    if (reader->ParseError() != 0) {
        modloader::warn("settings", "Failed to read settings: " + std::to_string(reader->ParseError()));
    }
#endif

    return std::move(reader);
}