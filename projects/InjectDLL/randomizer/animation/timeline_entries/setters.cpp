#include <randomizer/animation/timeline_entries/setters.h>
#include <randomizer/animation/timeline.h>

namespace randomizer
{
    namespace timeline_entries
    {
        namespace
        {
            IL2CPP_BINDING(UnityEngine, Transform, void, set_localPosition, (app::Transform* this_ptr, app::Vector3* position));
            IL2CPP_BINDING(UnityEngine, Transform, void, set_localScale, (app::Transform* this_ptr, app::Vector3* scale));
            IL2CPP_BINDING(UnityEngine, Transform, void, set_localRotation, (app::Transform* this_ptr, app::Quaternion* rotation));
            STATIC_IL2CPP_BINDING(UnityEngine, Quaternion, app::Quaternion, Euler, (float x, float y, float z));
        }

        void Position::parse(TimelineState& state, nlohmann::json const& j)
        {
            value = create_variable<app::Vector3>(state, j, "value", { 0, 0, 0 });
            Target::parse(state, j);
        }

        bool Position::update_state(TimelineState& state, float dt)
        {
            app::GameObject* root = get_target(state, target_type, id);
            if (il2cpp::unity::is_valid(root))
            {
                auto transform = il2cpp::unity::get_transform(root);
                Transform::set_localPosition(transform, &value(state));
            }

            return true;
        }

        void Scale::parse(TimelineState& state, nlohmann::json const& j)
        {
            value = create_variable<app::Vector3>(state, j, "value", { 0, 0, 0 });
            Target::parse(state, j);
        }

        bool Scale::update_state(TimelineState& state, float dt)
        {
            app::GameObject* root = get_target(state, target_type, id);
            if (il2cpp::unity::is_valid(root))
            {
                auto transform = il2cpp::unity::get_transform(root);
                Transform::set_localScale(transform, &value(state));
            }

            return true;
        }

        void Rotation::parse(TimelineState& state, nlohmann::json const& j)
        {
            value = create_variable<app::Vector3>(state, j, "value", { 0, 0, 0 });
            Target::parse(state, j);
        }

        bool Rotation::update_state(TimelineState& state, float dt)
        {
            app::GameObject* root = get_target(state, target_type, id);
            if (il2cpp::unity::is_valid(root))
            {
                auto transform = il2cpp::unity::get_transform(root);
                auto pos = value(state);
                auto quat = Quaternion::Euler(pos.x, pos.y, pos.z);
                Transform::set_localRotation(transform, &quat);
            }

            return true;
        }

        void Color::parse(TimelineState& state, nlohmann::json const& j)
        {
            value = create_variable<app::Color>(state, j, "value", { 1, 1, 1, 1 });
            Target::parse(state, j);
        }

        bool Color::update_state(TimelineState& state, float dt)
        {
            switch (target_type)
            {
            case TimelineObjectType::Animation:
            {
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
    }
}
