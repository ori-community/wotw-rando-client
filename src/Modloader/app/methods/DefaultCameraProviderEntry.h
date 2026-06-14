#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DefaultCameraProviderEntry.h>

namespace app::classes::DefaultCameraProviderEntry {
    IL2CPP_REGISTER_METHOD(0x00B7F000, void, ctor, app::DefaultCameraProviderEntry* this_ptr)
}
