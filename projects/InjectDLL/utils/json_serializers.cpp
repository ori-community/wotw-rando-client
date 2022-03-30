#include <utils/json_serializers.h>

namespace app {
    void to_json(nlohmann::json& j, const Vector2& s)
    {
        j = {
            { "x", s.x },
            { "y", s.y },
        };
    }

    void from_json(const nlohmann::json& j, Vector2& s)
    {
        s.x = j.value("x", 0.0f);
        s.y = j.value("y", 0.0f);
    }

    void to_json(nlohmann::json& j, const Vector3& s)
    {
        j = {
            { "x", s.x },
            { "y", s.y },
            { "z", s.z },
        };
    }

    void from_json(const nlohmann::json& j, Vector3& s)
    {
        s.x = j.value("x", 0.0f);
        s.y = j.value("y", 0.0f);
        s.z = j.value("z", 0.0f);
    }

    void to_json(nlohmann::json& j, const Vector4& s)
    {
        j = {
            { "x", s.x },
            { "y", s.y },
            { "z", s.z },
            { "w", s.w },
        };
    }

    void from_json(const nlohmann::json& j, Vector4& s)
    {
        s.x = j.value("x", 0.0f);
        s.y = j.value("y", 0.0f);
        s.z = j.value("z", 0.0f);
        s.w = j.value("w", 1.0f);
    }

    void to_json(nlohmann::json& j, const Color& s)
    {
        j = {
            { "r", s.r },
            { "g", s.g },
            { "b", s.b },
            { "a", s.a },
        };
    }

    void from_json(const nlohmann::json& j, Color& s)
    {
        s.r = j.value("r", 0.0f);
        s.g = j.value("g", 0.0f);
        s.b = j.value("b", 0.0f);
        s.a = j.value("a", 1.0f);
    }
}
