#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_System_Net_Http_Headers_HttpHeaders_HeaderBucket_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerato_Syste_Strin_Syste_Ne_Htt_Header_HttpHeader_HeaderBucke_.h>
#include <Modloader/app/structs/HttpHeaders_HeaderBucket.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_String_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Net_Http_Headers_HttpHeaders_HeaderBucket_ {
    IL2CPP_REGISTER_METHOD(
        0x0283AC50,
        void,
        ctor,
        app::Dictionary_2_System_String_System_Net_Http_Headers_HttpHeaders_HeaderBucket_* this_ptr,
        app::IEqualityComparer_1_System_String_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_System_String_System_Net_Http_Headers_HttpHeaders_HeaderBucket_,
        GetEnumerator,
        app::Dictionary_2_System_String_System_Net_Http_Headers_HttpHeaders_HeaderBucket_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BD24D0,
        app::HttpHeaders_HeaderBucket*,
        get_Item,
        app::Dictionary_2_System_String_System_Net_Http_Headers_HttpHeaders_HeaderBucket_* this_ptr,
        app::String* key
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Net_Http_Headers_HttpHeaders_HeaderBucket_
