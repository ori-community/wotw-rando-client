#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ValueToDateModel.h>

namespace app::classes::PlayFab::ClientModels::ValueToDateModel {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ValueToDateModel* this_ptr)
}
