#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RaceMenuScreenUISlot {
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::RaceSettings *, get_RaceSetting, (app::RaceMenuScreenUISlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00710480, void, SetSetting, (app::RaceMenuScreenUISlot * this_ptr, app::RaceSettings * race))
    IL2CPP_REGISTER_METHOD(0x007109E0, void, SetSelected, (app::RaceMenuScreenUISlot * this_ptr, bool selected))
    IL2CPP_REGISTER_METHOD(0x00710A00, void, SetItemContext, (app::RaceMenuScreenUISlot * this_ptr, app::Object * context, app::Object * grid_context))
    IL2CPP_REGISTER_METHOD(0x00710AD0, void, OnItemContextDirty, (app::RaceMenuScreenUISlot * this_ptr, app::Object * grid_context))
    IL2CPP_REGISTER_METHOD(0x00710AE0, void, OnPressed, (app::RaceMenuScreenUISlot * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04761410, RaceMenuScreenUISlot_OnPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00710F50, void, OnHighlighted, (app::RaceMenuScreenUISlot * this_ptr, bool play_sounds))
    IL2CPP_REGISTER_METHODINFO(0x0478B4A0, RaceMenuScreenUISlot_OnHighlighted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x007114E0, void, OnUnhighlighted, (app::RaceMenuScreenUISlot * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04738D30, RaceMenuScreenUISlot_OnUnhighlighted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00711650, void, OnBackPressed, (app::RaceMenuScreenUISlot * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04708EE8, RaceMenuScreenUISlot_OnBackPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00711660, void, UpdateNotification, (app::RaceMenuScreenUISlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00711770, void, ShowNotification, (app::RaceMenuScreenUISlot * this_ptr, bool show))
    IL2CPP_REGISTER_METHODINFO(0x0475DDF8, RaceMenuScreenUISlot_ShowNotification__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x007117E0, void, FixedUpdate, (app::RaceMenuScreenUISlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RaceMenuScreenUISlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00711850, void, cctor, ())
}
