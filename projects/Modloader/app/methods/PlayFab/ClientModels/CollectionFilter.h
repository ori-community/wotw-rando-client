#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CollectionFilter.h>

namespace app::classes::PlayFab::ClientModels::CollectionFilter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CollectionFilter * this_ptr))
}
