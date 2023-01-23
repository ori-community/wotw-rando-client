#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Dictionary_2_Moon_WeaponJoint_System_String_.h>
#include <Modloader/app/structs/WeaponJoint__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_WeaponJoint_System_String_ {
    IL2CPP_REGISTER_METHOD(0x02C35530, app::String*, get_Item, (app::Dictionary_2_Moon_WeaponJoint_System_String_ * this_ptr, app::WeaponJoint__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x04757CF0, Dictionary_2_Moon_WeaponJoint_System_String__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_Moon_WeaponJoint_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04764E28, Dictionary_2_Moon_WeaponJoint_System_String___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_Moon_WeaponJoint_System_String_ * this_ptr, app::WeaponJoint__Enum key, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x0472B5F8, Dictionary_2_Moon_WeaponJoint_System_String__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_WeaponJoint_System_String_
