#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/CipherSuite.h>
#include <Modloader/app/structs/CipherSuite__Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_Mono_Security_Protocol_Tls_CipherSuite_.h>
#include <Modloader/app/structs/List_1_Mono_Security_Protocol_Tls_CipherSuite_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Mono_Security_Protocol_Tls_CipherSuite_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::List_1_Mono_Security_Protocol_Tls_CipherSuite_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::CipherSuite*, get_Item, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_Mono_Security_Protocol_Tls_CipherSuite_,
        GetEnumerator,
        app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr, app::CipherSuite* item)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC80, void, set_Item, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr, int32_t index, app::CipherSuite* value)
    IL2CPP_REGISTER_METHOD(0x025F0BE0, int32_t, IndexOf, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr, app::CipherSuite* item)
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr, int32_t index, app::CipherSuite* item)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        System_Collections_Generic_ICollection_T__get_IsReadOnly,
        app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr, app::CipherSuite* item)
    IL2CPP_REGISTER_METHOD(
        0x025E95F0,
        void,
        CopyTo,
        app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr,
        app::CipherSuite__Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr, app::CipherSuite* item)
    IL2CPP_REGISTER_METHOD(
        0x025F0B50,
        app::IEnumerator_1_Mono_Security_Protocol_Tls_CipherSuite_*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator,
        app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025F0B50, app::IEnumerator*, IEnumerable_GetEnumerator, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FE89B0, app::Object*, IList_get_Item, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02FE89E0, void, IList_set_Item, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02FE8B60, int32_t, IList_Add, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02FE8E10, bool, IList_Contains, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FE91D0, int32_t, IList_IndexOf, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02FE9310, void, IList_Insert, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr, int32_t index, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02FE97F0, void, IList_Remove, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02FE8F50,
        void,
        ICollection_CopyTo,
        app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr,
        app::Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(0x02FE87E0, app::Object*, ICollection_get_SyncRoot, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::List_1_Mono_Security_Protocol_Tls_CipherSuite_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_Mono_Security_Protocol_Tls_CipherSuite_
