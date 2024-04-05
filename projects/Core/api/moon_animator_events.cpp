#include <Core/api/moon_animator_events.h>
#include <Modloader/app/methods/Moon/MoonAnimator_ActiveAnimation.h>
#include <Modloader/app/types/MoonAnimator_ActiveAnimation.h>
#include <Modloader/interception_macros.h>

namespace core::api::moon_animator {
    using namespace app::classes;

    common::EventBus<const MoonAnimationEvent&> animation_event_bus_instance;

    // MoonAnimator_ActiveAnimation_OnRemovedFromAnimator
    IL2CPP_INTERCEPT(Moon::MoonAnimator_ActiveAnimation, void, OnRemovedFromAnimator, (app::MoonAnimator_ActiveAnimation * this_ptr)) {
        next::Moon::MoonAnimator_ActiveAnimation::OnRemovedFromAnimator(this_ptr);

        // MoonAnimation is the only thing implementing IAnimation, so this is safe
        animation_event_bus_instance.trigger_event(MoonAnimationEvent{
            MoonAnimationEvent::Type::Finished,
            reinterpret_cast<app::MoonAnimation*>(this_ptr->fields.m_animation),
        });
    }

    common::EventBus<const MoonAnimationEvent&>& animation_event_bus() {
        return animation_event_bus_instance;
    }
} // namespace core::api::moon_animator
