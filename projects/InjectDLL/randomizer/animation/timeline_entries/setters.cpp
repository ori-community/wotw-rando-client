#include <randomizer/animation/timeline_entries/setters.h>
#include <randomizer/animation/timeline.h>

#include <utils/json_serializers.h>

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

        void Position::parse(nlohmann::json const& j)
        {
            value = j.value<app::Vector3>("value", {0, 0, 0});
            Target::parse(j);
        }

        bool Position::update_state(TimelineState& state, float dt)
        {
            app::GameObject* root = get_target(state, target_type, id);
            if (il2cpp::unity::is_valid(root))
            {
                auto transform = il2cpp::unity::get_transform(root);
                Transform::set_localPosition(transform, &value);
            }

            return true;
        }

        void Scale::parse(nlohmann::json const& j)
        {
            value = j.value<app::Vector3>("value", { 0, 0, 0 });
            Target::parse(j);
        }

        bool Scale::update_state(TimelineState& state, float dt)
        {
            app::GameObject* root = get_target(state, target_type, id);
            if (il2cpp::unity::is_valid(root))
            {
                auto transform = il2cpp::unity::get_transform(root);
                Transform::set_localScale(transform, &value);
            }

            return true;
        }

        void Rotation::parse(nlohmann::json const& j)
        {
            value = j.value<app::Vector3>("value", { 0, 0, 0 });
            Target::parse(j);
        }

        bool Rotation::update_state(TimelineState& state, float dt)
        {
            app::GameObject* root = get_target(state, target_type, id);
            if (il2cpp::unity::is_valid(root))
            {
                auto transform = il2cpp::unity::get_transform(root);
                auto quat = Quaternion::Euler(value.x, value.y, value.z);
                Transform::set_localRotation(transform, &quat);
            }

            return true;
        }

        void Color::parse(nlohmann::json const& j)
        {
            value = j.value<app::Color>("value", { 1, 1, 1, 1 });
            Target::parse(j);
        }

        bool Color::update_state(TimelineState& state, float dt)
        {
            switch (target_type)
            {
            case TimelineObjectType::Animation:
            {
                auto it = state.active_animations.find(id);
                if (it != state.active_animations.end())
                    it->second->color(value);
                break;
            }
            default:
                break;
            }

            return true;
        }
    }
}
