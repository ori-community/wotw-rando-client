#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Stack_1_LockOnTarget_.h>
#include <Modloader/app/structs/LockOnTarget.h>

namespace app::classes::System::Collections::Generic::Stack_1_LockOnTarget_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Stack_1_LockOnTarget_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF7F90, app::LockOnTarget*, Pop, (app::Stack_1_LockOnTarget_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF8030, void, Push, (app::Stack_1_LockOnTarget_ * this_ptr, app::LockOnTarget* item))
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Stack_1_LockOnTarget_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Stack_1_LockOnTarget_
