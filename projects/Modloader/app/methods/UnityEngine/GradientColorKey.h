#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/GradientColorKey__Boxed.h>

namespace app::classes::UnityEngine::GradientColorKey {
    IL2CPP_REGISTER_METHOD(0x001F2330, void, ctor, app::GradientColorKey__Boxed* this_ptr, app::Color col, float time)
}
