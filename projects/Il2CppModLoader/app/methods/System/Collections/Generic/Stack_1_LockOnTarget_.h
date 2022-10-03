#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::Stack_1_LockOnTarget_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Stack_1_LockOnTarget_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04735B48, Stack_1_LockOnTarget__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CF7F90, app::LockOnTarget*, Pop, (app::Stack_1_LockOnTarget_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04764390, Stack_1_LockOnTarget__Pop__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CF8030, void, Push, (app::Stack_1_LockOnTarget_ * this_ptr, app::LockOnTarget* item))
    IL2CPP_REGISTER_METHODINFO(0x0470FC78, Stack_1_LockOnTarget__Push__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Stack_1_LockOnTarget_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04741700, Stack_1_LockOnTarget___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Stack_1_LockOnTarget_
