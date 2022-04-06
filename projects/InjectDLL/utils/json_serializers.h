#pragma once

#include <json/json.hpp>
#include <randomizer/render/animation.h>
#include <randomizer/render/sprite.h>

namespace app {
    void to_json(nlohmann::json& j, const Vector2& s);
    void from_json(const nlohmann::json& j, Vector2& s);

    void to_json(nlohmann::json& j, const Vector3& s);
    void from_json(const nlohmann::json& j, Vector3& s);

    void to_json(nlohmann::json& j, const Vector4& s);
    void from_json(const nlohmann::json& j, Vector4& s);

    void to_json(nlohmann::json& j, const Color& s);
    void from_json(const nlohmann::json& j, Color& s);

    NLOHMANN_JSON_SERIALIZE_ENUM(BlendMode__Enum, {
        { BlendMode__Enum_Zero, "Zero" },
        { BlendMode__Enum_One, "One" },
        { BlendMode__Enum_DstColor, "DstColor" },
        { BlendMode__Enum_SrcColor, "SrcColor" },
        { BlendMode__Enum_OneMinusDstColor, "OneMinusDstColor" },
        { BlendMode__Enum_SrcAlpha, "SrcAlpha" },
        { BlendMode__Enum_OneMinusSrcColor, "OneMinusSrcColor" },
        { BlendMode__Enum_DstAlpha, "DstAlpha" },
        { BlendMode__Enum_OneMinusDstAlpha, "OneMinusDstAlpha" },
        { BlendMode__Enum_SrcAlphaSaturate, "SrcAlphaSaturate" },
        { BlendMode__Enum_OneMinusSrcAlpha, "OneMinusSrcAlpha" },
    });

    NLOHMANN_JSON_SERIALIZE_ENUM(AlignmentMode__Enum, {
        { AlignmentMode__Enum_Left, "Left" },
        { AlignmentMode__Enum_Center, "Center" },
        { AlignmentMode__Enum_Right, "Right" },
        { AlignmentMode__Enum_Justify, "Justify" },
    });

    NLOHMANN_JSON_SERIALIZE_ENUM(HorizontalAnchorMode__Enum, {
        { HorizontalAnchorMode__Enum_Left, "Left" },
        { HorizontalAnchorMode__Enum_Center, "Center" },
        { HorizontalAnchorMode__Enum_Right, "Right" },
    });

    NLOHMANN_JSON_SERIALIZE_ENUM(VerticalAnchorMode__Enum, {
        { VerticalAnchorMode__Enum_Top, "Top" },
        { VerticalAnchorMode__Enum_Middle, "Middle" },
        { VerticalAnchorMode__Enum_Bottom, "Bottom" },
    });
}

namespace randomizer
{
    NLOHMANN_JSON_SERIALIZE_ENUM(AnimationEndHandling, {
        { AnimationEndHandling::Freeze, "Freeze" },
        { AnimationEndHandling::Loop, "Loop" },
        { AnimationEndHandling::DestroyOnEnd, "DestroyOnEnd" },
        { AnimationEndHandling::DeactivateOnEnd, "DeactivateOnEnd" },
    });

    NLOHMANN_JSON_SERIALIZE_ENUM(SpriteEndHandling, {
        { SpriteEndHandling::Freeze, "Freeze" },
        { SpriteEndHandling::Hide, "Hide" },
    });
}
