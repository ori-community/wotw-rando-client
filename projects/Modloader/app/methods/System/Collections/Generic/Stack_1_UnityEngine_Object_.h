#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::Stack_1_UnityEngine_Object_ {
    IL2CPP_REGISTER_METHOD(0x02CF78E0, void, ctor, (app::Stack_1_UnityEngine_Object_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04712878, Stack_1_UnityEngine_Object___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Stack_1_UnityEngine_Object_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047467E0, Stack_1_UnityEngine_Object__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CF8030, void, Push, (app::Stack_1_UnityEngine_Object_ * this_ptr, app::Object_1* item))
    IL2CPP_REGISTER_METHODINFO(0x0477C868, Stack_1_UnityEngine_Object__Push__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CF7F90, app::Object_1*, Pop, (app::Stack_1_UnityEngine_Object_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473D738, Stack_1_UnityEngine_Object__Pop__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Stack_1_UnityEngine_Object_
