#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/Guid__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_System_Guid_.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_Guid_ {
    IL2CPP_REGISTER_METHOD(0x02435080, bool, Equals_1, app::ObjectEqualityComparer_1_System_Guid_* this_ptr, app::Guid x, app::Guid y)
    IL2CPP_REGISTER_METHOD(0x024350E0, int32_t, GetHashCode_1, app::ObjectEqualityComparer_1_System_Guid_* this_ptr, app::Guid obj)
    IL2CPP_REGISTER_METHOD(
        0x02435110,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_System_Guid_* this_ptr,
        app::Guid__Array* array,
        app::Guid value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02435200,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_System_Guid_* this_ptr,
        app::Guid__Array* array,
        app::Guid value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_System_Guid_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_System_Guid_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_System_Guid_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_Guid_
