#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GenericPlayFabIdPair.h>

namespace app::classes::PlayFab::ClientModels::GenericPlayFabIdPair {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GenericPlayFabIdPair* this_ptr)
}
