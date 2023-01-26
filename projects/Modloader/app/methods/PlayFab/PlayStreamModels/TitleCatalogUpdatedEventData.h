#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TitleCatalogUpdatedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitleCatalogUpdatedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TitleCatalogUpdatedEventData * this_ptr))
}
