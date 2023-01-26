#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoadDebugMenuPage_c.h>
#include <Modloader/app/structs/LoadDebugMenuPage_DebugSaveInfo.h>

namespace app::classes::LoadDebugMenuPage___c {
    IL2CPP_REGISTER_METHOD(0x00FB3CA0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LoadDebugMenuPage_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FB3DE0, int32_t, _PopulateSaves_b__11_0, (app::LoadDebugMenuPage_c * this_ptr, app::LoadDebugMenuPage_DebugSaveInfo save1, app::LoadDebugMenuPage_DebugSaveInfo save2))
} // namespace app::classes::LoadDebugMenuPage___c
