#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32_.h>
#include <Modloader/app/structs/Guid.h>

namespace app::classes::System::Collections::Concurrent::ConcurrentDictionary_2_TKey_TValue__Node_System_Guid_System_Int32_ {
    IL2CPP_REGISTER_METHOD(
        0x02ADDA30,
        void,
        ctor,
        app::ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32_* this_ptr,
        app::Guid key,
        int32_t value,
        int32_t hashcode,
        app::ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32_* next
    )
}
