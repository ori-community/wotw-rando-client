#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/SeinGlidePuppet.h>

namespace app::classes::SeinGlidePuppet {
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_Id, app::SeinGlidePuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE6180, void, ctor, app::SeinGlidePuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE62E0, app::MoonAnimator*, get_LeafAnimator, app::SeinGlidePuppet* this_ptr)
} // namespace app::classes::SeinGlidePuppet
