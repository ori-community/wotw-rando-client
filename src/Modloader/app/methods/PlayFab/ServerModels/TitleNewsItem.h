#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TitleNewsItem_1.h>

namespace app::classes::PlayFab::ServerModels::TitleNewsItem {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TitleNewsItem_1* this_ptr)
}
