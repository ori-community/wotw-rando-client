#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GradientAlphaKey__Boxed.h>

namespace app::classes::UnityEngine::GradientAlphaKey {
    IL2CPP_REGISTER_METHOD(0x00125480, void, ctor, app::GradientAlphaKey__Boxed* this_ptr, float alpha, float time)
}
