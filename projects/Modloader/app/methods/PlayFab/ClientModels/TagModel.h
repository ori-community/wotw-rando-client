#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TagModel.h>

namespace app::classes::PlayFab::ClientModels::TagModel {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TagModel* this_ptr)
}
