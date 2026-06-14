#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SharedGroupDataRecord_1.h>

namespace app::classes::PlayFab::ServerModels::SharedGroupDataRecord {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SharedGroupDataRecord_1* this_ptr)
}
