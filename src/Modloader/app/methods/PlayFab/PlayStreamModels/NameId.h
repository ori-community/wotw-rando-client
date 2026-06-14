#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NameId.h>

namespace app::classes::PlayFab::PlayStreamModels::NameId {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NameId* this_ptr)
}
