#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_LegacyAnimator_System_Single_.h>
#include <Modloader/app/structs/LegacyAnimator.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_LegacyAnimator_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_LegacyAnimator_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BBBD40, void, set_Item, (app::Dictionary_2_LegacyAnimator_System_Single_ * this_ptr, app::LegacyAnimator* key, float value))
    IL2CPP_REGISTER_METHOD(0x02E78EF0, float, get_Item, (app::Dictionary_2_LegacyAnimator_System_Single_ * this_ptr, app::LegacyAnimator* key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_LegacyAnimator_System_Single_
