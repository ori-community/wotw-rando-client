#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ShowQuest {
    IL2CPP_REGISTER_METHOD(0x005C5F70, void, ChangeState, (app::ShowQuest * this_ptr, app::ShowQuest_State__Enum state))
    IL2CPP_REGISTER_METHODINFO(0x047401D0, ShowQuest_ChangeState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005C6680, void, Perform, (app::ShowQuest * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005C6810, void, FixedUpdate, (app::ShowQuest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472F918, ShowQuest_FixedUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (app::ShowQuest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C6CE0, bool, get_IsPerforming, (app::ShowQuest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C6CF0, void, OnVisibilityChangedCallback, (app::ShowQuest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04713E10, ShowQuest_OnVisibilityChangedCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005C6D10, void, Serialize, (app::ShowQuest * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x005C6DA0, void, ctor, (app::ShowQuest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C6DD0, void, _ChangeState_b__10_0, (app::ShowQuest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047150A0, ShowQuest__ChangeState_b__10_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005C7070, void, _Perform_b__12_0, (app::ShowQuest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472E398, ShowQuest__Perform_b__12_0__MethodInfo)
} // namespace app::classes::ShowQuest
