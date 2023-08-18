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
std::unique_ptr<INIReader> read_utf8_ini(const std::string& path) {
    auto reader = std::make_unique<INIReader>(path);

#ifndef NO_MODLOADER
    if (reader->ParseError() != 0) {
        modloader::warn("settings", "Failed to read settings: " + std::to_string(reader->ParseError()));
    }
#endif

    return std::move(reader);
}