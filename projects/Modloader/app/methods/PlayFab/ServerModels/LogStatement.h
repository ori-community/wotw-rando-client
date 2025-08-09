#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LogStatement_2.h>

namespace app::classes::PlayFab::ServerModels::LogStatement {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LogStatement_2* this_ptr)
}
