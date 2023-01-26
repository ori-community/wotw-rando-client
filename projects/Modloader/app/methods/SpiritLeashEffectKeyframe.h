#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiritLeashEffectKeyframe.h>

namespace app::classes::SpiritLeashEffectKeyframe {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SpiritLeashEffectKeyframe * this_ptr))
}
