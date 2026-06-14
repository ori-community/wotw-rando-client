#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BloodVFXPair.h>
#include <Modloader/app/structs/DamageRecieverType__Enum.h>
#include <Modloader/app/structs/Dictionary_2_DamageRecieverType_BloodVFXPair_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_DamageRecieverType_BloodVFXPair_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_DamageRecieverType_BloodVFXPair_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_DamageRecieverType_BloodVFXPair_* this_ptr,
        app::DamageRecieverType__Enum key,
        app::BloodVFXPair* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_DamageRecieverType_BloodVFXPair_* this_ptr,
        app::DamageRecieverType__Enum key,
        app::BloodVFXPair** value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_DamageRecieverType_BloodVFXPair_
