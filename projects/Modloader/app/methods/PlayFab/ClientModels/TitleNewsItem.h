#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TitleNewsItem.h>

namespace app::classes::PlayFab::ClientModels::TitleNewsItem {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TitleNewsItem* this_ptr)
}
