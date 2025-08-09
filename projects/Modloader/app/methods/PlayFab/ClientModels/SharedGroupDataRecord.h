#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SharedGroupDataRecord.h>

namespace app::classes::PlayFab::ClientModels::SharedGroupDataRecord {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SharedGroupDataRecord* this_ptr)
}
