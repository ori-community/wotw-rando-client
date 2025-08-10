#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Object_.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Concurrent::ConcurrentDictionary_2_TKey_TValue__Node_System_Guid_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x02ADD9F0,
        void,
        ctor,
        app::ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Object_* this_ptr,
        app::Guid key,
        app::Object* value,
        int32_t hashcode,
        app::ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Object_* next
    )
}
