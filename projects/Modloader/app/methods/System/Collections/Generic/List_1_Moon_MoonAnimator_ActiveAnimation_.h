#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_MoonAnimator_ActiveAnimation_.h>
#include <Modloader/app/structs/MoonAnimator_ActiveAnimation.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_MoonAnimator_ActiveAnimation_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_MoonAnimator_ActiveAnimation_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_MoonAnimator_ActiveAnimation_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonAnimator_ActiveAnimation*, get_Item, (app::List_1_Moon_MoonAnimator_ActiveAnimation_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, (app::List_1_Moon_MoonAnimator_ActiveAnimation_ * this_ptr, int32_t index, app::MoonAnimator_ActiveAnimation* item))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_MoonAnimator_ActiveAnimation_ * this_ptr, app::MoonAnimator_ActiveAnimation* item))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_MoonAnimator_ActiveAnimation_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_Moon_MoonAnimator_ActiveAnimation_ * this_ptr, int32_t index))
} // namespace app::classes::System::Collections::Generic::List_1_Moon_MoonAnimator_ActiveAnimation_
