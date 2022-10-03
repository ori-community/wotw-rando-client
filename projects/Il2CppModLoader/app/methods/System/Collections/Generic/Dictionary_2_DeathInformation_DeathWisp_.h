#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_DeathInformation_DeathWisp_ {
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_DeathInformation_DeathWisp_*, get_Values, (app::Dictionary_2_DeathInformation_DeathWisp_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476B918, Dictionary_2_DeathInformation_DeathWisp__get_Values__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_DeathInformation_DeathWisp_ * this_ptr, app::DeathInformation* key))
    IL2CPP_REGISTER_METHODINFO(0x0478B230, Dictionary_2_DeathInformation_DeathWisp__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::DeathWisp*, get_Item, (app::Dictionary_2_DeathInformation_DeathWisp_ * this_ptr, app::DeathInformation* key))
    IL2CPP_REGISTER_METHODINFO(0x0476CB10, Dictionary_2_DeathInformation_DeathWisp__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_DeathInformation_DeathWisp_ * this_ptr, app::DeathInformation* key, app::DeathWisp* value))
    IL2CPP_REGISTER_METHODINFO(0x047876C8, Dictionary_2_DeathInformation_DeathWisp__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_DeathInformation_DeathWisp_ * this_ptr, app::DeathInformation* key))
    IL2CPP_REGISTER_METHODINFO(0x047217E0, Dictionary_2_DeathInformation_DeathWisp__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_DeathInformation_DeathWisp_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478C108, Dictionary_2_DeathInformation_DeathWisp___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_DeathInformation_DeathWisp_
