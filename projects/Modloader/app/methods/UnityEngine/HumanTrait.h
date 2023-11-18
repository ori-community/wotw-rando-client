#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::HumanTrait {
    IL2CPP_REGISTER_METHOD(0x030872A0, int32_t, GetBoneIndexFromMono, (int32_t human_id))
}
