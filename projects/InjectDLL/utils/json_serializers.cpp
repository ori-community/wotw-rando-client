#include <utils/json_serializers.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>

#include <fstream>

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

bool load_json_file(std::string path, nlohmann::json& j)
{
    using namespace modloader;
    std::ifstream stream(base_path + path);
    if (stream.is_open())
    {
        try
        {
            stream >> j;
        }
        catch (nlohmann::json::parse_error& ex)
        {
            trace(MessageType::Warning, 3, "util", format("failed to parse '%s%s' error '%d' at byte '%d'", base_path.c_str(), path, ex.id, ex.byte));
            return false;
        }
    }
    else
    {
        trace(MessageType::Warning, 3, "util", format("failed to open '%s%s'", base_path.c_str(), path));
        return false;
    }

    return true;
}
