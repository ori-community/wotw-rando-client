#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NameIdentifier.h>

namespace app::classes::PlayFab::PlayStreamModels::NameIdentifier {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NameIdentifier* this_ptr)
}
