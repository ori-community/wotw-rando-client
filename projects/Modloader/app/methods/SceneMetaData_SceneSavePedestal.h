#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SavePedestal.h>
#include <Modloader/app/structs/SceneMetaData_SceneSavePedestal.h>

namespace app::classes::SceneMetaData_SceneSavePedestal {
    IL2CPP_REGISTER_METHOD(0x00BADAC0, void, ctor, app::SceneMetaData_SceneSavePedestal* this_ptr, app::SavePedestal* pedestal)
}
