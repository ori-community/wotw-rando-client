#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ModifyItemUsesResult.h>

namespace app::classes::PlayFab::ServerModels::ModifyItemUsesResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ModifyItemUsesResult* this_ptr)
}
