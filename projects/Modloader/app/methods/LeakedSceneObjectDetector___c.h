#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LeakedSceneObjectDetector_c.h>
#include <Modloader/app/structs/LeakedSceneObjectDetector_ObjectData.h>

namespace app::classes::LeakedSceneObjectDetector___c {
    IL2CPP_REGISTER_METHOD(0x015C5130, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LeakedSceneObjectDetector_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015C5270, int32_t, _Print_b__16_1, (app::LeakedSceneObjectDetector_c * this_ptr, app::LeakedSceneObjectDetector_ObjectData* a, app::LeakedSceneObjectDetector_ObjectData* b))
} // namespace app::classes::LeakedSceneObjectDetector___c
