#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_PlayFab_ClientModels_ItemInstance_.h>
#include <Modloader/app/structs/ItemInstance.h>

namespace app::classes::System::Collections::Generic::List_1_PlayFab_ClientModels_ItemInstance_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_PlayFab_ClientModels_ItemInstance_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_PlayFab_ClientModels_ItemInstance_ * this_ptr, app::ItemInstance* item))
} // namespace app::classes::System::Collections::Generic::List_1_PlayFab_ClientModels_ItemInstance_
