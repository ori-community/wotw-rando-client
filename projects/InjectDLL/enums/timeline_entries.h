#pragma once

#include <json/json.hpp>

enum class TimelineEntryType
{
    Unknown,
    Group,

    Animation,
    Sound,
    Text,

    Position,
    Rotation,
    Scale,
    Color,

    LerpPosition,
    LerpRotation,
    LerpScale,
};

enum class TimelineObjectType
{
    Unknown,
    Animation,
    Sound,
    Text,
};

enum class AnimationEnd
{
    Repeat,
    Destroy,
};

NLOHMANN_JSON_SERIALIZE_ENUM(TimelineEntryType, {
    { TimelineEntryType::Unknown, "Unknown" },
    { TimelineEntryType::Group, "Group" },
    { TimelineEntryType::Animation, "Animation" },
    { TimelineEntryType::Sound, "Sound" },
    { TimelineEntryType::Text, "Text" },
    { TimelineEntryType::Position, "Position" },
    { TimelineEntryType::Rotation, "Rotation" },
    { TimelineEntryType::Scale, "Scale" },
    { TimelineEntryType::LerpPosition, "LerpPosition" },
});

NLOHMANN_JSON_SERIALIZE_ENUM(TimelineObjectType, {
    { TimelineObjectType::Unknown, "Unknown" },
    { TimelineObjectType::Animation, "Animation" },
    { TimelineObjectType::Sound, "Sound" },
    { TimelineObjectType::Text, "Text" },
});

NLOHMANN_JSON_SERIALIZE_ENUM(AnimationEnd, {
    { AnimationEnd::Repeat, "Repeat" },
    { AnimationEnd::Destroy, "Destroy" },
});
