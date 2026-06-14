#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConcurrentDictionary_2_System_Type_System_Tuple_4_.h>
#include <Modloader/app/structs/Func_2_Type_Tuple_4_Boolean_Boolean_Boolean_Boolean_.h>
#include <Modloader/app/structs/Tuple_4_Boolean_Boolean_Boolean_Boolean_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Collections::Concurrent::ConcurrentDictionary_2_System_Type_System_Tuple_4_ {
    IL2CPP_REGISTER_METHOD(
        0x02AF0770,
        app::Tuple_4_Boolean_Boolean_Boolean_Boolean_*,
        GetOrAdd,
        app::ConcurrentDictionary_2_System_Type_System_Tuple_4_* this_ptr,
        app::Type* key,
        app::Func_2_Type_Tuple_4_Boolean_Boolean_Boolean_Boolean_* value_factory
    )
    IL2CPP_REGISTER_METHOD(0x02ADDC30, void, ctor, app::ConcurrentDictionary_2_System_Type_System_Tuple_4_* this_ptr)
} // namespace app::classes::System::Collections::Concurrent::ConcurrentDictionary_2_System_Type_System_Tuple_4_
