#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TransformForBoneSelection.h>

namespace app::classes::Moon::TransformForBoneSelection {
    IL2CPP_REGISTER_METHOD(0x004C87C0, void, ctor, app::TransformForBoneSelection* this_ptr, float height_offset)
}
