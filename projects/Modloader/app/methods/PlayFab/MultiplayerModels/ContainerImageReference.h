#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ContainerImageReference.h>

namespace app::classes::PlayFab::MultiplayerModels::ContainerImageReference {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ContainerImageReference* this_ptr)
}
