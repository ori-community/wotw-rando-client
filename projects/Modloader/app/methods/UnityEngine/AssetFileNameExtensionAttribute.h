#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AssetFileNameExtensionAttribute.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::UnityEngine::AssetFileNameExtensionAttribute {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::AssetFileNameExtensionAttribute * this_ptr, app::String* preferred_extension, app::String__Array* other_extensions))
}
