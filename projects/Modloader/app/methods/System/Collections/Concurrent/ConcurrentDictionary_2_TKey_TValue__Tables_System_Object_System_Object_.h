#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConcurrentDictionary_2_TKey_TValue_Node_System_Object_System_Object___Array.h>
#include <Modloader/app/structs/ConcurrentDictionary_2_TKey_TValue_Tables_System_Object_System_Object_.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Collections::Concurrent::ConcurrentDictionary_2_TKey_TValue__Tables_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x02ADDAA0,
        void,
        ctor,
        app::ConcurrentDictionary_2_TKey_TValue_Tables_System_Object_System_Object_* this_ptr,
        app::ConcurrentDictionary_2_TKey_TValue_Node_System_Object_System_Object___Array* buckets,
        app::Object__Array* locks,
        app::Int32__Array* count_per_lock
    )
}
