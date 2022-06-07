#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_Moon_UberID_Moon_UberStateValueGroup_ {
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_Moon_UberID_Moon_UberStateValueGroup_, GetEnumerator, (app::Dictionary_2_Moon_UberID_Moon_UberStateValueGroup_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473A758, Dictionary_2_Moon_UberID_Moon_UberStateValueGroup__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_Moon_UberID_Moon_UberStateValueGroup_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04787B90, Dictionary_2_Moon_UberID_Moon_UberStateValueGroup___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_Moon_UberID_Moon_UberStateValueGroup_ * this_ptr, app::UberID * key, app::UberStateValueGroup * value))
    IL2CPP_REGISTER_METHODINFO(0x0472FC40, Dictionary_2_Moon_UberID_Moon_UberStateValueGroup__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_Moon_UberStateValueGroup_ *, get_Keys, (app::Dictionary_2_Moon_UberID_Moon_UberStateValueGroup_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470FA18, Dictionary_2_Moon_UberID_Moon_UberStateValueGroup__get_Keys__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::UberStateValueGroup *, get_Item, (app::Dictionary_2_Moon_UberID_Moon_UberStateValueGroup_ * this_ptr, app::UberID * key))
    IL2CPP_REGISTER_METHODINFO(0x04741490, Dictionary_2_Moon_UberID_Moon_UberStateValueGroup__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_Moon_UberID_Moon_UberStateValueGroup_ * this_ptr, app::UberID * key, app::UberStateValueGroup * * value))
    IL2CPP_REGISTER_METHODINFO(0x0474F0E0, Dictionary_2_Moon_UberID_Moon_UberStateValueGroup__TryGetValue__MethodInfo)
}
