#pragma once

#include <randomizer/animation/animation.h>
#include <randomizer/cached_loader.h>
#include <randomizer/messages/messages.h>
#include <randomizer/sound.h>

#include <optional>
#include <unordered_map>
#include <variant>

namespace randomizer {
    struct TimelineVariable {
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

    struct TimelineState {
        float time = 0;
        app::GameObject* root = nullptr;
        std::unordered_map<std::string, TimelineVariable> variables;
        std::unordered_map<int, std::shared_ptr<Animation>> active_animations;
        std::unordered_map<int, std::shared_ptr<SoundActor>> active_sounds;
        std::unordered_map<int, std::shared_ptr<TextBox>> active_text;
    };
} // namespace randomizer
