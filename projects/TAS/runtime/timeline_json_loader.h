#pragma once

#include <TAS/runtime/timeline.h>
#include <nlohmann/json.hpp>

namespace tas::runtime::timeline {
    bool load_from_json(Timeline& timeline, const nlohmann::json& j);
    bool load_from_json_file(Timeline& timeline, std::string path, nlohmann::json& j);
}