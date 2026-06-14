#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_PlayFab_ClientModels_PushNotificationRegistrationModel_.h>
#include <Modloader/app/structs/PushNotificationRegistrationModel.h>

namespace app::classes::System::Collections::Generic::List_1_PlayFab_ClientModels_PushNotificationRegistrationModel_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_PlayFab_ClientModels_PushNotificationRegistrationModel_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_PlayFab_ClientModels_PushNotificationRegistrationModel_* this_ptr,
        app::PushNotificationRegistrationModel* item
    )
} // namespace app::classes::System::Collections::Generic::List_1_PlayFab_ClientModels_PushNotificationRegistrationModel_
