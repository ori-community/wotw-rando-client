#pragma once

#include <json/json.hpp>

namespace app {
    void to_json(nlohmann::json& j, const Vector3& s);
    void from_json(const nlohmann::json& j, Vector3& s);

    void to_json(nlohmann::json& j, const Vector4& s);
    void from_json(const nlohmann::json& j, Vector4& s);

    void to_json(nlohmann::json& j, const Color& s);
    void from_json(const nlohmann::json& j, Color& s);
}
