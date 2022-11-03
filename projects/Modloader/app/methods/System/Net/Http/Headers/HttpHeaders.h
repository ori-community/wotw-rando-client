#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::Http::Headers::HttpHeaders {
    IL2CPP_REGISTER_METHOD(0x02D083E0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x02D0C270, void, ctor_1, (app::HttpHeaders * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D0C410, void, ctor_2, (app::HttpHeaders * this_ptr, app::HttpHeaderKind__Enum header_kind))
    IL2CPP_REGISTER_METHOD(0x02D0C440, app::IEnumerator_1_KeyValuePair_2_System_String_IEnumerable_1_System_String_*, GetEnumerator, (app::HttpHeaders * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D0C590, app::IEnumerator*, IEnumerable_GetEnumerator, (app::HttpHeaders * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D0C5A0, app::String*, GetSingleHeaderString, (app::String * key, app::IEnumerable_1_System_String_* values))
    IL2CPP_REGISTER_METHOD(0x02D0C9D0, app::String*, ToString, (app::HttpHeaders * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D0CD20, app::List_1_System_String_*, GetAllHeaderValues, (app::HttpHeaders * this_ptr, app::HttpHeaders_HeaderBucket* bucket, app::HeaderInfo_1* header_info))
} // namespace app::classes::System::Net::Http::Headers::HttpHeaders
