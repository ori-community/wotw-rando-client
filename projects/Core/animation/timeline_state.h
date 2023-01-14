#pragma once

#include <Core/animation/animation.h>
#include <Core/api/sound.h>
#include <Core/cached_loader.h>
#include <Core/core.h>
#include <Core/macros.h>

#include <optional>
#include <unordered_map>
#include <variant>

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
        std::unordered_map<int, std::shared_ptr<api::SoundActor>> active_sounds;
        std::unordered_map<int, std::shared_ptr<api::messages::MessageBox>> active_text;
    };
} // namespace core::animation
