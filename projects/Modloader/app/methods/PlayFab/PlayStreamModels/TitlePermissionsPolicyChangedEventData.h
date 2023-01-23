#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TitlePermissionsPolicyChangedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitlePermissionsPolicyChangedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TitlePermissionsPolicyChangedEventData * this_ptr))
}
