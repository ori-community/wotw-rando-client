#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TrailRenderer.h>

namespace app::classes::UnityEngine::TrailRenderer {
    IL2CPP_REGISTER_METHOD(0x02C6AC30, float, get_time, (app::TrailRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C6AC80, void, set_time, (app::TrailRenderer * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02C6ACE0, void, Clear, (app::TrailRenderer * this_ptr))
} // namespace app::classes::UnityEngine::TrailRenderer
