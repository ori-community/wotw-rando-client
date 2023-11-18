#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserWindowsHelloInfo.h>

namespace app::classes::PlayFab::ClientModels::UserWindowsHelloInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UserWindowsHelloInfo * this_ptr))
}
