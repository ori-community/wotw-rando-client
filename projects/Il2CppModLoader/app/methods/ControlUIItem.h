#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ControlUIItem {
    IL2CPP_REGISTER_METHOD(0x011F07F0, void, SetItemContext, (app::ControlUIItem * this_ptr, app::Object* context, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x011F08D0, void, UpdateDisplay, (app::ControlUIItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F0E80, void, OnItemContextDirty, (app::ControlUIItem * this_ptr, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x011F0E90, void, OnHighlighted, (app::ControlUIItem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047375E8, ControlUIItem_OnHighlighted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011F0EF0, void, OnUnhighlighted, (app::ControlUIItem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04785090, ControlUIItem_OnUnhighlighted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011F0F50, void, FixedUpdate, (app::ControlUIItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ControlUIItem * this_ptr))
} // namespace app::classes::ControlUIItem
