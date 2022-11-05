#pragma once

#include <TAS/runtime/timeline.h>
#include <nlohmann/json.hpp>

namespace tas::runtime::timeline {
    void load_from_json(Timeline& timeline, const nlohmann::json& j);
    void load_from_json_file(Timeline& timeline, std::string path);
}