#include <randomizer/animation/timeline_entries/lerpers.h>
#include <randomizer/animation/timeline.h>

#include <Il2CppModLoader/il2cpp_math.h>

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

        void LerpPosition::parse(nlohmann::json const& j)
        {
            start = j.value<app::Vector3>("start", { 0, 0, 0 });
            end = j.value<app::Vector3>("end", { 0, 0, 0 });
            duration = j.value<float>("duration", 0);
            Target::parse(j);
        }

        bool LerpPosition::update_state(TimelineState& state, float dt)
        {
            app::GameObject* root = get_target(state, target_type, id);
            if (il2cpp::unity::is_valid(root))
            {
                auto elapsed = state.time - start_time;
                auto time = std::max(elapsed / duration, 1.0f);
                app::Vector3 position = modloader::math::lerp(start, end, time);

                auto transform = il2cpp::unity::get_transform(root);
                Transform::set_position(transform, &position);
                return elapsed >= duration;
            }

            // If we can't find the object we kill this entry.
            return true;
        }
    }
}
