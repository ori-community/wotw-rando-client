#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserWindowsHelloInfo_1.h>

namespace app::classes::PlayFab::ServerModels::UserWindowsHelloInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UserWindowsHelloInfo_1* this_ptr)
}
