#include <Randomizer/input/helpers.h>
#include <Modloader/app/methods/BashAttackGame.h>
#include <Modloader/app/methods/SeinBashAttack.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>
#include <vector>

namespace {
    using namespace modloader;
    using namespace app::classes;

    bool updated_keyboard_angle_this_attack = false;

    IL2CPP_INTERCEPT(void, BashAttackGame, UpdateDPadAngle, bool smooth, float* angle_in_out, float* kbd_speed_in_out, float* kbd_angle_in_out, bool* kbd_clockwise_in_out) {
        if (!updated_keyboard_angle_this_attack) {
            *angle_in_out = *kbd_angle_in_out;
        }

        next::BashAttackGame::UpdateDPadAngle(smooth, angle_in_out, kbd_speed_in_out, kbd_angle_in_out, kbd_clockwise_in_out);
    }

    IL2CPP_INTERCEPT_WITH_ORDER(10, void, SeinBashAttack, BeginBash, app::SeinBashAttack* this_ptr) {
        next::SeinBashAttack::BeginBash(this_ptr);
        updated_keyboard_angle_this_attack = false;
    }

    IL2CPP_INTERCEPT(void, BashAttackGame, FixedUpdate, app::BashAttackGame* this_ptr) {
        next::BashAttackGame::FixedUpdate(this_ptr);
        updated_keyboard_angle_this_attack = true;
    }
}
