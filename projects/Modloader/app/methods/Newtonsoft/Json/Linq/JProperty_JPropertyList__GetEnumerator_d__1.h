#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JProperty_JPropertyList_GetEnumerator_d_1.h>
#include <Modloader/app/structs/JToken.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Newtonsoft::Json::Linq::JProperty_JPropertyList__GetEnumerator_d__1 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::JProperty_JPropertyList_GetEnumerator_d_1* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::JProperty_JPropertyList_GetEnumerator_d_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F0E520, bool, MoveNext, app::JProperty_JPropertyList_GetEnumerator_d_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::JToken*, IEnumerator_JToken__get_Current, app::JProperty_JPropertyList_GetEnumerator_d_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F0E570, void, IEnumerator_Reset, app::JProperty_JPropertyList_GetEnumerator_d_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::JProperty_JPropertyList_GetEnumerator_d_1* this_ptr)
} // namespace app::classes::Newtonsoft::Json::Linq::JProperty_JPropertyList__GetEnumerator_d__1
