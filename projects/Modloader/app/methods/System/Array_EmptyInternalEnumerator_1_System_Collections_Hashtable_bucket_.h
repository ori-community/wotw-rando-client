#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array_EmptyInternalEnumerator_1_System_Collections_Hashtable_bucket_.h>
#include <Modloader/app/structs/Hashtable_bucket.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_EmptyInternalEnumerator_1_System_Collections_Hashtable_bucket_ {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, app::Array_EmptyInternalEnumerator_1_System_Collections_Hashtable_bucket_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, MoveNext, app::Array_EmptyInternalEnumerator_1_System_Collections_Hashtable_bucket_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02045B50, app::Hashtable_bucket, get_Current, app::Array_EmptyInternalEnumerator_1_System_Collections_Hashtable_bucket_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01CFF500,
        app::Object*,
        IEnumerator_get_Current,
        app::Array_EmptyInternalEnumerator_1_System_Collections_Hashtable_bucket_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IEnumerator_Reset, app::Array_EmptyInternalEnumerator_1_System_Collections_Hashtable_bucket_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Array_EmptyInternalEnumerator_1_System_Collections_Hashtable_bucket_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CFEB90, void, cctor, )
} // namespace app::classes::System::Array_EmptyInternalEnumerator_1_System_Collections_Hashtable_bucket_
