#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Stack_1_Moon_MoonAnimator_ActiveAnimation_.h>
#include <Modloader/app/structs/MoonAnimator_ActiveAnimation.h>

namespace app::classes::System::Collections::Generic::Stack_1_Moon_MoonAnimator_ActiveAnimation_ {
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Stack_1_Moon_MoonAnimator_ActiveAnimation_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04712328, Stack_1_Moon_MoonAnimator_ActiveAnimation___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CF8030, void, Push, (app::Stack_1_Moon_MoonAnimator_ActiveAnimation_ * this_ptr, app::MoonAnimator_ActiveAnimation* item))
    IL2CPP_REGISTER_METHODINFO(0x0473AF78, Stack_1_Moon_MoonAnimator_ActiveAnimation__Push__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Stack_1_Moon_MoonAnimator_ActiveAnimation_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477B7F0, Stack_1_Moon_MoonAnimator_ActiveAnimation__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CF7F90, app::MoonAnimator_ActiveAnimation*, Pop, (app::Stack_1_Moon_MoonAnimator_ActiveAnimation_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475E9A8, Stack_1_Moon_MoonAnimator_ActiveAnimation__Pop__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Stack_1_Moon_MoonAnimator_ActiveAnimation_
