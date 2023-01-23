#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StatSetting.h>
#include <Modloader/app/structs/StatUISlot.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::StatUISlot {
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::StatSetting*, get_StatSetting, (app::StatUISlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B4000, void, SetSetting, (app::StatUISlot * this_ptr, app::StatSetting* stat))
    IL2CPP_REGISTER_METHOD(0x009B43A0, void, SetSelected, (app::StatUISlot * this_ptr, bool selected))
    IL2CPP_REGISTER_METHOD(0x009B43F0, void, SetItemContext, (app::StatUISlot * this_ptr, app::Object* context, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x009B44C0, void, OnItemContextDirty, (app::StatUISlot * this_ptr, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPressed, (app::StatUISlot * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475EC90, StatUISlot_OnPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009B44D0, void, OnHighlighted, (app::StatUISlot * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04791268, StatUISlot_OnHighlighted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009B4590, void, OnUnhighlighted, (app::StatUISlot * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470F518, StatUISlot_OnUnhighlighted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::StatUISlot * this_ptr))
} // namespace app::classes::StatUISlot
