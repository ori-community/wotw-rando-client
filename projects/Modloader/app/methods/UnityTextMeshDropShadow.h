#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnityTextMeshDropShadow.h>

namespace app::classes::UnityTextMeshDropShadow {
    IL2CPP_REGISTER_METHOD(0x013AA130, void, Awake, (app::UnityTextMeshDropShadow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AAE90, void, Update, (app::UnityTextMeshDropShadow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AB1C0, void, ctor, (app::UnityTextMeshDropShadow * this_ptr))
} // namespace app::classes::UnityTextMeshDropShadow
