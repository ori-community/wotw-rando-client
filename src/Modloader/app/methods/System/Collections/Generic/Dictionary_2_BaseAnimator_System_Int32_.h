#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/Dictionary_2_BaseAnimator_System_Int32_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_BaseAnimator_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_BaseAnimator_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, app::Dictionary_2_BaseAnimator_System_Int32_* this_ptr, app::BaseAnimator* key, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02BCC050, int32_t, get_Item, app::Dictionary_2_BaseAnimator_System_Int32_* this_ptr, app::BaseAnimator* key)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_BaseAnimator_System_Int32_
