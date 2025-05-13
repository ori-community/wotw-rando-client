#include <Modloader/app/methods/SpiritGrenade.h>
#include <Modloader/app/types/Rigidbody.h>
#include <Modloader/app/methods/UnityEngine/Rigidbody.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>

namespace {
    using namespace app::classes;

    /**
     * If a grenade is destroyed the same frame a Bash starts its suspended flag gets stuck being set to true.
     * Since grenades are pooled, this grenade will never unsuspend.
     */

    IL2CPP_INTERCEPT(SpiritGrenade, void, Start, (app::SpiritGrenade * this_ptr)) {
        this_ptr->fields._IsSuspended_k__BackingField = false;
        next::SpiritGrenade::Start(this_ptr);
    }

    IL2CPP_INTERCEPT(SpiritGrenade, void, SetTrajectory, (app::SpiritGrenade * this_ptr, app::Vector2 speed)) {
        if (!this_ptr->fields.Bashable && !this_ptr->fields.Fractures) {
            const auto rigid_body = il2cpp::unity::get_component<app::Rigidbody>(this_ptr, types::Rigidbody::get_class());
            UnityEngine::Rigidbody::set_isKinematic(rigid_body, false);
        }

        next::SpiritGrenade::SetTrajectory(this_ptr, speed);
    }
}
