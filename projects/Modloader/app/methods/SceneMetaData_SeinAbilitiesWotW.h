#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneMetaData_SeinAbilitiesWotW.h>
#include <Modloader/app/structs/PlayerAbilities.h>

namespace app::classes::SceneMetaData_SeinAbilitiesWotW {
    IL2CPP_REGISTER_METHOD(0x00BADDC0, void, ctor_1, (app::SceneMetaData_SeinAbilitiesWotW * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BADDD0, void, ctor_2, (app::SceneMetaData_SeinAbilitiesWotW * this_ptr, app::SceneMetaData_SeinAbilitiesWotW* abilities))
    IL2CPP_REGISTER_METHOD(0x00BADE60, void, ctor_3, (app::SceneMetaData_SeinAbilitiesWotW * this_ptr, app::PlayerAbilities* abilities))
} // namespace app::classes::SceneMetaData_SeinAbilitiesWotW
