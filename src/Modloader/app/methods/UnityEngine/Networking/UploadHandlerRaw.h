#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/UploadHandlerRaw.h>

namespace app::classes::UnityEngine::Networking::UploadHandlerRaw {
    IL2CPP_REGISTER_METHOD(0x03181290, void, ctor, app::UploadHandlerRaw* this_ptr, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x031813A0, void*, Create, app::UploadHandlerRaw* self, app::Byte__Array* data)
} // namespace app::classes::UnityEngine::Networking::UploadHandlerRaw
