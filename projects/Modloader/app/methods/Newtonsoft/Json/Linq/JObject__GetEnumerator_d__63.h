#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JObject_GetEnumerator_d_63.h>
#include <Modloader/app/structs/KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Newtonsoft::Json::Linq::JObject__GetEnumerator_d__63 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::JObject_GetEnumerator_d_63* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x01F0C7E0, void, IDisposable_Dispose, app::JObject_GetEnumerator_d_63* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F0C820, bool, MoveNext, app::JObject_GetEnumerator_d_63* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F0CA20, void, __m__Finally1, app::JObject_GetEnumerator_d_63* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00C3DD30,
        app::KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_,
        IEnumerator_KeyValuePair_string__JToken___get_Current,
        app::JObject_GetEnumerator_d_63* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x01F0CAC0, void, IEnumerator_Reset, app::JObject_GetEnumerator_d_63* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F0CB10, app::Object*, IEnumerator_get_Current, app::JObject_GetEnumerator_d_63* this_ptr)
} // namespace app::classes::Newtonsoft::Json::Linq::JObject__GetEnumerator_d__63
