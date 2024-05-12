#include <Modloader/app/methods/GenericPuppet.h>
#include <Modloader/app/methods/SeinDoubleJump.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

namespace {
    using namespace app::classes;

    /**
     * In vanilla, the triple jump shockwave only plays if extra jumps == 2.
     * This patch changes it to always use the last available jump.
     */

    app::SeinDoubleJump* performing_double_jump;
    app::GameObject* triple_jump_effect;
    app::GameObject* double_jump_effect;

    IL2CPP_INTERCEPT(GenericPuppet, app::Object_1*, Instantiate, (app::GenericPuppet * this_ptr, app::GameObject* prefab, app::Vector3 position, app::Quaternion rotation, bool record)) {
        if (performing_double_jump != nullptr && (prefab == double_jump_effect || prefab == triple_jump_effect)) {
            prefab = (performing_double_jump->fields.m_numberOfJumpsAvailable == 0 && SeinDoubleJump::get_ExtraJumpsAvailable() >= 2)
                ? triple_jump_effect
                : double_jump_effect;
        }

        return next::GenericPuppet::Instantiate(this_ptr, prefab, position, rotation, record);
    }

    IL2CPP_INTERCEPT(SeinDoubleJump, void, PerformDoubleJump, (app::SeinDoubleJump * this_ptr)) {
        modloader::ScopedSetter _(performing_double_jump, this_ptr);

        const auto puppet = SeinDoubleJump::get_Puppet(this_ptr);
        double_jump_effect = puppet->fields.DoubleJumpAfterShock;
        triple_jump_effect = puppet->fields.TrippleJumpAfterShock;

        next::SeinDoubleJump::PerformDoubleJump(this_ptr);
    }
}
