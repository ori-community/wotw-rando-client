#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/AudioExtensionDefinition.h>

namespace app::classes::UnityEngine::AudioExtensionDefinition {
    IL2CPP_REGISTER_METHOD(0x0313EB20, app::Type*, GetExtensionType, (app::AudioExtensionDefinition * this_ptr))
}
