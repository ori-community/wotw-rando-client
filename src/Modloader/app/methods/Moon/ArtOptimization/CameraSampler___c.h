#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraSampler_c.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SceneMetaData.h>

namespace app::classes::Moon::ArtOptimization::CameraSampler___c {
    IL2CPP_REGISTER_METHOD(0x01349EA0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CameraSampler_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01349FE0, app::Rect, __ctor_b__2_0, app::CameraSampler_c* this_ptr, app::SceneMetaData* meta)
} // namespace app::classes::Moon::ArtOptimization::CameraSampler___c
