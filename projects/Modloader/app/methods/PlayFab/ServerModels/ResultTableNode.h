#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ResultTableNode.h>

namespace app::classes::PlayFab::ServerModels::ResultTableNode {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ResultTableNode* this_ptr)
}
