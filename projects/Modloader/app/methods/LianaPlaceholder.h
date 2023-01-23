#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LianaPlaceholder.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::LianaPlaceholder {
    IL2CPP_REGISTER_METHOD(0x0113F3B0, void, Initialize, (app::LianaPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0113F6C0, void, ctor, (app::LianaPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDisableOnRecordablePreview_get_gameObject, (app::LianaPlaceholder * this_ptr))
} // namespace app::classes::LianaPlaceholder
