#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_EquipmentType_WeaponVFXSet_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_EquipmentType_WeaponVFXSet_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04795448, Dictionary_2_EquipmentType_WeaponVFXSet___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_EquipmentType_WeaponVFXSet_ * this_ptr, app::EquipmentType__Enum key, app::WeaponVFXSet * value))
    IL2CPP_REGISTER_METHODINFO(0x04793A88, Dictionary_2_EquipmentType_WeaponVFXSet__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_EquipmentType_WeaponVFXSet_ * this_ptr, app::EquipmentType__Enum key, app::WeaponVFXSet * * value))
    IL2CPP_REGISTER_METHODINFO(0x04788170, Dictionary_2_EquipmentType_WeaponVFXSet__TryGetValue__MethodInfo)
}
