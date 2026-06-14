#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EmailVerificationStatus__Enum.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_ClientModels_EmailVerificationStatus___Boxed.h>

namespace app::classes::System::Nullable_1_PlayFab_ClientModels_EmailVerificationStatus_ {
    IL2CPP_REGISTER_METHOD(
        0x0010DB80,
        void,
        ctor,
        app::Nullable_1_PlayFab_ClientModels_EmailVerificationStatus___Boxed* this_ptr,
        app::EmailVerificationStatus__Enum value
    )
}
