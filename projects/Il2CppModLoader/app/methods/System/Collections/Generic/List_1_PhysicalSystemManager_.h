#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_PhysicalSystemManager_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_PhysicalSystemManager_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478AA40, List_1_PhysicalSystemManager__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::PhysicalSystemManager*, get_Item, (app::List_1_PhysicalSystemManager_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04713690, List_1_PhysicalSystemManager__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_PhysicalSystemManager_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0476EB70, List_1_PhysicalSystemManager__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_PhysicalSystemManager_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04743610, List_1_PhysicalSystemManager___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_PhysicalSystemManager_, GetEnumerator, (app::List_1_PhysicalSystemManager_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473DDE8, List_1_PhysicalSystemManager__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_PhysicalSystemManager_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475DA28, List_1_PhysicalSystemManager__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_PhysicalSystemManager_ * this_ptr, app::PhysicalSystemManager* item))
    IL2CPP_REGISTER_METHODINFO(0x04768070, List_1_PhysicalSystemManager__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_PhysicalSystemManager_ * this_ptr, app::PhysicalSystemManager* item))
    IL2CPP_REGISTER_METHODINFO(0x0473F3C0, List_1_PhysicalSystemManager__Remove__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_PhysicalSystemManager_
