#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::UI::ObjectPool_1_System_Collections_Generic_List_1_ {
    IL2CPP_REGISTER_METHOD(0x02ACEDE0, void, ctor, (app::ObjectPool_1_System_Collections_Generic_List_1_ * this_ptr, app::UnityAction_1_System_Collections_Generic_List_1_ * action_on_get, app::UnityAction_1_System_Collections_Generic_List_1_ * action_on_release))
    IL2CPP_REGISTER_METHODINFO(0x0474C370, ObjectPool_1_System_Collections_Generic_List_1___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ACEFA0, app::List_1_UnityEngine_EventSystems_IEventSystemHandler_ *, Get, (app::ObjectPool_1_System_Collections_Generic_List_1_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047121A0, ObjectPool_1_System_Collections_Generic_List_1__Get__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ACF090, void, Release, (app::ObjectPool_1_System_Collections_Generic_List_1_ * this_ptr, app::List_1_UnityEngine_EventSystems_IEventSystemHandler_ * element))
    IL2CPP_REGISTER_METHODINFO(0x04755568, ObjectPool_1_System_Collections_Generic_List_1__Release__MethodInfo)
}
