#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_String_SystemIntegration_Races_RaceDataCache_.h>
#include <Modloader/app/structs/RaceDataCache.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04716080, Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache_ * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHODINFO(0x0471A1C0, Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_String_SystemIntegration_Races_RaceDataCache_, GetEnumerator, (app::Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474AD58, Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache_ * this_ptr, app::String* key, app::RaceDataCache** value))
    IL2CPP_REGISTER_METHODINFO(0x0474F7E8, Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache_ * this_ptr, app::String* key, app::RaceDataCache* value))
    IL2CPP_REGISTER_METHODINFO(0x04774AA0, Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047860C8, Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::RaceDataCache*, get_Item, (app::Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache_ * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHODINFO(0x04799280, Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache__get_Item__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache_
