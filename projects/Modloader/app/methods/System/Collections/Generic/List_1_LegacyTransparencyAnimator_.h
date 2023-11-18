#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_T_Enumerator_LegacyTransparencyAnimator_.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/List_1_LegacyTransparencyAnimator_.h>

namespace app::classes::System::Collections::Generic::List_1_LegacyTransparencyAnimator_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_LegacyTransparencyAnimator_, GetEnumerator, (app::List_1_LegacyTransparencyAnimator_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_LegacyTransparencyAnimator_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_LegacyTransparencyAnimator_ * this_ptr, app::LegacyTransparencyAnimator* item))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::LegacyTransparencyAnimator*, get_Item, (app::List_1_LegacyTransparencyAnimator_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_LegacyTransparencyAnimator_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, (app::List_1_LegacyTransparencyAnimator_ * this_ptr, int32_t capacity))
} // namespace app::classes::System::Collections::Generic::List_1_LegacyTransparencyAnimator_
