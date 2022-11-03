#pragma once

#include <animation/animation.h>
#include <Core/utils/cached_loader.h>
#include <Core/api/messages/messages.h>
#include <sound.h>

#include <optional>
#include <unordered_map>
#include <variant>
#include <Core/macros.h>

namespace core::animation {
    struct CORE_DLLEXPORT VariableValue {
        std::optional<
                std::variant<
                        bool,
                        int,
                        float,
                        std::string,
                        app::Vector2,
                        app::Vector3,
                        app::Color,
                        SoundEventID>>
                value;
    };

    struct CORE_DLLEXPORT TimelineState {
        float time = 0;
        app::GameObject* root = nullptr;
        std::unordered_map<std::string, VariableValue> variable_values;
        std::unordered_map<int, std::shared_ptr<Animation>> active_animations;
        std::unordered_map<int, std::shared_ptr<core::sound::SoundActor>> active_sounds;
        std::unordered_map<int, std::shared_ptr<TextBox>> active_text;
    };
} // namespace core::animation
