#include <Core/api/moon_animator_events.h>
#include <Modloader/app/methods/Moon/MoonAnimator_ActiveAnimation.h>
#include <Modloader/app/types/MoonAnimator_ActiveAnimation.h>
#include <Modloader/interception_macros.h>

namespace core::api::moon_animator {
    using namespace app::classes;

    // MoonAnimator_ActiveAnimation_OnRemovedFromAnimator
    IL2CPP_INTERCEPT(void, Moon::MoonAnimator_ActiveAnimation, OnRemovedFromAnimator, app::MoonAnimator_ActiveAnimation * this_ptr) {
        next::Moon::MoonAnimator_ActiveAnimation::OnRemovedFromAnimator(this_ptr);

        // MoonAnimation is the only thing implementing IAnimation, so this is safe
        event_bus().emit(events::AnimationFinished(reinterpret_cast<app::MoonAnimation*>(this_ptr->fields.m_animation)));
    }

    events::bus_t& event_bus() {
        static events::bus_t event_bus;
        return event_bus;
    }
} // namespace core::api::moon_animator
