#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_Newtonsoft_Json_JsonPosition___Boxed.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/JsonPosition.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_InternalEnumerator_1_Newtonsoft_Json_JsonPosition_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_Newtonsoft_Json_JsonPosition___Boxed * this_ptr, app::Array* array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_Newtonsoft_Json_JsonPosition___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_Newtonsoft_Json_JsonPosition___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001AEA20, app::JsonPosition, get_Current, (app::Array_InternalEnumerator_1_Newtonsoft_Json_JsonPosition___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04775270, Array_InternalEnumerator_1_Newtonsoft_Json_JsonPosition__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_Newtonsoft_Json_JsonPosition___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001AEA50, app::Object*, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_Newtonsoft_Json_JsonPosition___Boxed * this_ptr))
} // namespace app::classes::System::Array_InternalEnumerator_1_Newtonsoft_Json_JsonPosition_
