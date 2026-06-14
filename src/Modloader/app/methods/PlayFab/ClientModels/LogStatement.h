#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LogStatement.h>

namespace app::classes::PlayFab::ClientModels::LogStatement {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LogStatement* this_ptr)
}
