#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EntityDataObject.h>

namespace app::classes::PlayFab::ProfilesModels::EntityDataObject {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EntityDataObject * this_ptr))
}
