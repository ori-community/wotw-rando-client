#include <macros.h>
#include <Il2CppModLoader/interception_macros.h>

namespace
{
    bool always_show_keystones = false;
    IL2CPP_INTERCEPT(, SeinUI, void, FixedUpdate, (app::SeinUI* this_ptr)) {
        if (always_show_keystones)
            this_ptr->fields.m_showKeystonesTimer = this_ptr->fields.ShowKeyStoneTime;

        SeinUI::FixedUpdate(this_ptr);
    }
}

INJECT_C_DLLEXPORT void toggle_always_show_keystones()
{
    always_show_keystones = !always_show_keystones;
}
