#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RuntimeInitializeOnLoadMethodAttribute.h>
#include <Modloader/app/structs/RuntimeInitializeLoadType__Enum.h>

namespace app::classes::UnityEngine::RuntimeInitializeOnLoadMethodAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC780, void, ctor_1, (app::RuntimeInitializeOnLoadMethodAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor_2, (app::RuntimeInitializeOnLoadMethodAttribute * this_ptr, app::RuntimeInitializeLoadType__Enum load_type))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_loadType, (app::RuntimeInitializeOnLoadMethodAttribute * this_ptr, app::RuntimeInitializeLoadType__Enum value))
} // namespace app::classes::UnityEngine::RuntimeInitializeOnLoadMethodAttribute
