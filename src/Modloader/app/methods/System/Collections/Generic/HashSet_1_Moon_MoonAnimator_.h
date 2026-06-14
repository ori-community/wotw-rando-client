#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_Moon_MoonAnimator_.h>
#include <Modloader/app/structs/MoonAnimator.h>

namespace app::classes::System::Collections::Generic::HashSet_1_Moon_MoonAnimator_ {
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, app::HashSet_1_Moon_MoonAnimator_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, app::HashSet_1_Moon_MoonAnimator_* this_ptr, app::MoonAnimator* item)
    IL2CPP_REGISTER_METHOD(0x02ABEAC0, bool, Contains, app::HashSet_1_Moon_MoonAnimator_* this_ptr, app::MoonAnimator* item)
} // namespace app::classes::System::Collections::Generic::HashSet_1_Moon_MoonAnimator_
