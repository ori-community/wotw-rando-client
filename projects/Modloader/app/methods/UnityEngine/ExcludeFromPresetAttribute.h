#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ExcludeFromPresetAttribute.h>

namespace app::classes::UnityEngine::ExcludeFromPresetAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ExcludeFromPresetAttribute * this_ptr))
}
