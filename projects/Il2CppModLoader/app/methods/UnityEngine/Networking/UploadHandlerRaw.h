#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Networking::UploadHandlerRaw {
    IL2CPP_REGISTER_METHOD(0x03181290, void, ctor, (app::UploadHandlerRaw * this_ptr, app::Byte__Array * data))
    IL2CPP_REGISTER_METHODINFO(0x04742F78, UploadHandlerRaw__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031813A0, void *, Create, (app::UploadHandlerRaw * self, app::Byte__Array * data))
}
