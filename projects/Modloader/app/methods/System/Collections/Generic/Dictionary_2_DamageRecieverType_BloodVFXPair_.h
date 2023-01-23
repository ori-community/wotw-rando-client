#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_DamageRecieverType_BloodVFXPair_.h>
#include <Modloader/app/structs/DamageRecieverType__Enum.h>
#include <Modloader/app/structs/BloodVFXPair.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_DamageRecieverType_BloodVFXPair_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_DamageRecieverType_BloodVFXPair_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04750CA0, Dictionary_2_DamageRecieverType_BloodVFXPair___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_DamageRecieverType_BloodVFXPair_ * this_ptr, app::DamageRecieverType__Enum key, app::BloodVFXPair* value))
    IL2CPP_REGISTER_METHODINFO(0x04754F98, Dictionary_2_DamageRecieverType_BloodVFXPair__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_DamageRecieverType_BloodVFXPair_ * this_ptr, app::DamageRecieverType__Enum key, app::BloodVFXPair** value))
    IL2CPP_REGISTER_METHODINFO(0x0474C280, Dictionary_2_DamageRecieverType_BloodVFXPair__TryGetValue__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_DamageRecieverType_BloodVFXPair_
