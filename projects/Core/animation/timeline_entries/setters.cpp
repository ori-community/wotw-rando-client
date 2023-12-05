#include <Core/animation/timeline.h>
#include <Core/animation/timeline_entries/setters.h>

#include <Modloader/app/methods/UnityEngine/Quaternion.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>

using namespace app::classes;
using namespace app::classes::UnityEngine;

namespace core::animation::timeline_entries {
    void Position::parse(TimelineState& state, nlohmann::json const& j) {
        value = create_variable<app::Vector3>(state, j, "value", { 0, 0, 0 });
        Target::parse(state, j);
    }

    bool Position::update_state(TimelineState& state, float dt) {
        app::GameObject* root = get_target(state, target_type, id);
        if (il2cpp::unity::is_valid(root)) {
            auto transform = il2cpp::unity::get_transform(root);
            auto vec = value(state);
            Transform::set_localPosition(transform, vec);
        }

        return true;
    }

    void Scale::parse(TimelineState& state, nlohmann::json const& j) {
        value = create_variable<app::Vector3>(state, j, "value", { 0, 0, 0 });
        Target::parse(state, j);
    }

    bool Scale::update_state(TimelineState& state, float dt) {
        app::GameObject* root = get_target(state, target_type, id);
        if (il2cpp::unity::is_valid(root)) {
            auto transform = il2cpp::unity::get_transform(root);
            auto vec = value(state);
            Transform::set_localScale(transform, vec);
        }

        return true;
    }

    void Rotation::parse(TimelineState& state, nlohmann::json const& j) {
        value = create_variable<app::Vector3>(state, j, "value", { 0, 0, 0 });
        Target::parse(state, j);
    }

    bool Rotation::update_state(TimelineState& state, float dt) {
        app::GameObject* root = get_target(state, target_type, id);
        if (il2cpp::unity::is_valid(root)) {
            auto transform = il2cpp::unity::get_transform(root);
            auto pos = value(state);
            auto quat = Quaternion::Euler_1(pos.x, pos.y, pos.z);
            Transform::set_localRotation(transform, quat);
        }

        return true;
    }

    void Color::parse(TimelineState& state, nlohmann::json const& j) {
        value = create_variable<app::Color>(state, j, "value", { 1, 1, 1, 1 });
        Target::parse(state, j);
    }

    bool Color::update_state(TimelineState& state, float dt) {
        switch (target_type) {
            case TimelineObjectType::Animation: {
                auto it = state.active_animations.find(id);
                if (it != state.active_animations.end())
                    it->second->color(value(state));
                break;
            }
            default:
                break;
        }

        return true;
    }
} // namespace core::animation::timeline_entries
