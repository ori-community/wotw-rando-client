#include <randomizer/animation/timeline_entries/setters.h>
#include <randomizer/animation/timeline.h>

#include <utils/json_serializers.h>

namespace randomizer
{
    namespace timeline_entries
    {
        namespace
        {
            IL2CPP_BINDING(UnityEngine, Transform, void, set_position, (app::Transform* this_ptr, app::Vector3* position));
            IL2CPP_BINDING(UnityEngine, Transform, void, set_localScale, (app::Transform* this_ptr, app::Vector3* scale));
            IL2CPP_BINDING(UnityEngine, Transform, void, set_rotation, (app::Transform* this_ptr, app::Quaternion* rotation));
            STATIC_IL2CPP_BINDING(UnityEngine, Quaternion, app::Quaternion, Euler, (float x, float y, float z));
        }

        void Position::parse(nlohmann::json const& j)
        {
            position = j.value<app::Vector3>("position", {0, 0, 0});
            Target::parse(j);
        }

        bool Position::update_state(TimelineState& state, float dt)
        {
            app::GameObject* root = get_target(state, target_type, id);
            if (il2cpp::unity::is_valid(root))
            {
                auto transform = il2cpp::unity::get_transform(root);
                Transform::set_position(transform, &position);
            }

            return true;
        }

        void Scale::parse(nlohmann::json const& j)
        {
            scale = j.value<app::Vector3>("scale", { 0, 0, 0 });
            Target::parse(j);
        }

        bool Scale::update_state(TimelineState& state, float dt)
        {
            app::GameObject* root = get_target(state, target_type, id);
            if (il2cpp::unity::is_valid(root))
            {
                auto transform = il2cpp::unity::get_transform(root);
                Transform::set_localScale(transform, &scale);
            }

            return true;
        }

        void Rotation::parse(nlohmann::json const& j)
        {
            rotation = j.value<app::Vector3>("rotation", { 0, 0, 0 });
            Target::parse(j);
        }

        bool Rotation::update_state(TimelineState& state, float dt)
        {
            app::GameObject* root = get_target(state, target_type, id);
            if (il2cpp::unity::is_valid(root))
            {
                auto transform = il2cpp::unity::get_transform(root);
                auto quat = Quaternion::Euler(rotation.x, rotation.y, rotation.z);
                Transform::set_rotation(transform, &quat);
            }

            return true;
        }
    }
}
