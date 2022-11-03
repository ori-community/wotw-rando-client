#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::EntitySettings {
    IL2CPP_REGISTER_METHOD(0x01220CB0, void, GetDebugMenuItems, (app::EntitySettings * this_ptr, app::List_1_IDebugMenuItem_* list, app::String* menu_name))
    IL2CPP_REGISTER_METHOD(0x012219B0, void, ctor, (app::EntitySettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00418FC0, float, _GetDebugMenuItems_b__3_0, (app::EntitySettings * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04765E68, EntitySettings__GetDebugMenuItems_b__3_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00A64050, void, _GetDebugMenuItems_b__3_1, (app::EntitySettings * this_ptr, float f))
    IL2CPP_REGISTER_METHODINFO(0x04775498, EntitySettings__GetDebugMenuItems_b__3_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E2F880, float, _GetDebugMenuItems_b__3_2, (app::EntitySettings * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04747188, EntitySettings__GetDebugMenuItems_b__3_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012219F0, void, _GetDebugMenuItems_b__3_3, (app::EntitySettings * this_ptr, float f))
    IL2CPP_REGISTER_METHODINFO(0x04768B00, EntitySettings__GetDebugMenuItems_b__3_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C3DD50, float, _GetDebugMenuItems_b__3_4, (app::EntitySettings * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047617C0, EntitySettings__GetDebugMenuItems_b__3_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C3DD60, void, _GetDebugMenuItems_b__3_5, (app::EntitySettings * this_ptr, float f))
    IL2CPP_REGISTER_METHODINFO(0x047137D8, EntitySettings__GetDebugMenuItems_b__3_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00504E70, float, _GetDebugMenuItems_b__3_6, (app::EntitySettings * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04735418, EntitySettings__GetDebugMenuItems_b__3_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00504E80, void, _GetDebugMenuItems_b__3_7, (app::EntitySettings * this_ptr, float f))
    IL2CPP_REGISTER_METHODINFO(0x04706C78, EntitySettings__GetDebugMenuItems_b__3_7__MethodInfo)
} // namespace app::classes::Moon::EntitySettings
