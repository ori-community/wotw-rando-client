#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RecorderAsset.h>
#include <Modloader/app/structs/RecorderData.h>

namespace app::classes::RecorderAsset {
    IL2CPP_REGISTER_METHOD(0x002FB940, void, SetData, app::RecorderAsset* this_ptr, app::RecorderData* data)
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, app::RecorderAsset* this_ptr)
} // namespace app::classes::RecorderAsset
