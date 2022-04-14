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
            IL2CPP_BINDING(UnityEngine, Transform, void, set_localPosition, (app::Transform* this_ptr, app::Vector3 const* position));
            IL2CPP_BINDING(UnityEngine, Transform, void, set_localScale, (app::Transform* this_ptr, app::Vector3 const* scale));
            IL2CPP_BINDING(UnityEngine, Transform, void, set_localRotation, (app::Transform* this_ptr, app::Quaternion const* rotation));
            STATIC_IL2CPP_BINDING(UnityEngine, Quaternion, app::Quaternion, Euler, (float x, float y, float z));
        }

        void Lerper::parse(TimelineState& state, nlohmann::json const& j)
        {
            start = create_variable<app::Vector3>(state, j, "start", { 0, 0, 0 });
            end = create_variable<app::Vector3>(state, j, "end", { 0, 0, 0 });
            duration = create_variable(state, j, "duration", 0.f);
            Target::parse(state, j);
        }

        using apply_lerp = void(*)(app::GameObject*& root, app::Vector3 const& value);
        bool handle_lerp(TimelineState& state, Lerper const& lerper, apply_lerp applier)
        {
            auto root = get_target(state, lerper.target_type, lerper.id);
            if (il2cpp::unity::is_valid(root))
            {
                auto elapsed = state.time - lerper.start_time;
                auto time = std::max(elapsed / lerper.duration(state), 1.0f);
                applier(root, modloader::math::lerp(lerper.start(state), lerper.end(state), time));
                return elapsed >= lerper.duration(state);
            }

            // If we can't find the object we kill this entry.
            return true;
        }

        bool LerpPosition::update_state(TimelineState& state, float dt)
        {
            return handle_lerp(state, *this, [](auto root, auto value) {
                auto transform = il2cpp::unity::get_transform(root);
                Transform::set_localPosition(transform, &value);
            });
        }

        bool LerpRotation::update_state(TimelineState& state, float dt)
        {
            return handle_lerp(state, *this, [](auto root, auto value) {
                auto transform = il2cpp::unity::get_transform(root);
                auto quat = Quaternion::Euler(value.x, value.y, value.z);
                Transform::set_localRotation(transform, &quat);
            });
        }

        bool LerpScale::update_state(TimelineState& state, float dt)
        {
            return handle_lerp(state, *this, [](auto root, auto value) {
                auto transform = il2cpp::unity::get_transform(root);
                Transform::set_localScale(transform, &value);
            });
        }
    }
}
