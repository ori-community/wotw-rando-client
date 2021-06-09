#include <macros.h>

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

namespace
{
    bool disable_autoaim = false;
    bool overwrite_attackables = false;
    IL2CPP_INTERCEPT(, SeinSpiritSpearSpell, void, FindClosestAttackTarget, (app::SeinSpiritSpearSpell* this_ptr)) {
        overwrite_attackables = disable_autoaim;
        SeinSpiritSpearSpell::FindClosestAttackTarget(this_ptr);
        overwrite_attackables = false;
    }

    uint32_t handle = 0;
    IL2CPP_INTERCEPT_OVERLOAD(Game, Targets, app::IEnumerable_1_IAttackable_*, get_Attackables, (app::Targets* this_ptr)) {
        if (overwrite_attackables)
        {
            Il2CppArray* arr = nullptr;
            if (handle == 0)
            {
                arr = il2cpp::untyped::array_new(il2cpp::get_class("", "IAttackable"), 0);
                il2cpp::gchandle_new(arr, false);
            }
            else
                arr = reinterpret_cast<Il2CppArray*>(il2cpp::gchandle_target(handle));

            return reinterpret_cast<app::IEnumerable_1_IAttackable_*>(arr);
        }

        return Targets::get_Attackables(this_ptr);
    }
}

INJECT_C_DLLEXPORT void set_autoaim(bool enabled)
{
    disable_autoaim = !enabled;
}
