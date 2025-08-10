#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GenericEqualityComparer_1_System_ValueTuple_2_.h>
#include <Modloader/app/structs/GenericEqualityComparer_1_System_ValueTuple_2__1.h>
#include <Modloader/app/structs/GenericEqualityComparer_1_System_ValueTuple_2__2.h>
#include <Modloader/app/structs/GenericEqualityComparer_1_System_ValueTuple_2__3.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_Int32_.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_Int32___Array.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_Object_.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_Object___Array.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Object_.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Object___Array.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Single_.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Single___Array.h>

namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_System_ValueTuple_2_ {
    IL2CPP_REGISTER_METHOD(
        0x02AB19C0,
        bool,
        Equals_1,
        app::GenericEqualityComparer_1_System_ValueTuple_2_* this_ptr,
        app::ValueTuple_2_Int32_Int32_ x,
        app::ValueTuple_2_Int32_Int32_ y
    )
    IL2CPP_REGISTER_METHOD(
        0x02437080,
        int32_t,
        GetHashCode_1,
        app::GenericEqualityComparer_1_System_ValueTuple_2_* this_ptr,
        app::ValueTuple_2_Int32_Int32_ obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02AB1AC0,
        int32_t,
        IndexOf_1,
        app::GenericEqualityComparer_1_System_ValueTuple_2_* this_ptr,
        app::ValueTuple_2_Int32_Int32___Array* array,
        app::ValueTuple_2_Int32_Int32_ value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02AB1C50,
        int32_t,
        LastIndexOf_1,
        app::GenericEqualityComparer_1_System_ValueTuple_2_* this_ptr,
        app::ValueTuple_2_Int32_Int32___Array* array,
        app::ValueTuple_2_Int32_Int32_ value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x02AB0EE0, bool, Equals_2, app::GenericEqualityComparer_1_System_ValueTuple_2_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::GenericEqualityComparer_1_System_ValueTuple_2_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225BDA0, void, ctor_1, app::GenericEqualityComparer_1_System_ValueTuple_2_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02AB1DF0,
        bool,
        Equals_3,
        app::GenericEqualityComparer_1_System_ValueTuple_2__1* this_ptr,
        app::ValueTuple_2_Int32_Object_ x,
        app::ValueTuple_2_Int32_Object_ y
    )
    IL2CPP_REGISTER_METHOD(
        0x02437480,
        int32_t,
        GetHashCode_3,
        app::GenericEqualityComparer_1_System_ValueTuple_2__1* this_ptr,
        app::ValueTuple_2_Int32_Object_ obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02AB1EF0,
        int32_t,
        IndexOf_2,
        app::GenericEqualityComparer_1_System_ValueTuple_2__1* this_ptr,
        app::ValueTuple_2_Int32_Object___Array* array,
        app::ValueTuple_2_Int32_Object_ value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02AB20A0,
        int32_t,
        LastIndexOf_2,
        app::GenericEqualityComparer_1_System_ValueTuple_2__1* this_ptr,
        app::ValueTuple_2_Int32_Object___Array* array,
        app::ValueTuple_2_Int32_Object_ value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x02AB0EE0, bool, Equals_4, app::GenericEqualityComparer_1_System_ValueTuple_2__1* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_4, app::GenericEqualityComparer_1_System_ValueTuple_2__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225BDA0, void, ctor_2, app::GenericEqualityComparer_1_System_ValueTuple_2__1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02AB1DF0,
        bool,
        Equals_5,
        app::GenericEqualityComparer_1_System_ValueTuple_2__2* this_ptr,
        app::ValueTuple_2_Object_Object_ x,
        app::ValueTuple_2_Object_Object_ y
    )
    IL2CPP_REGISTER_METHOD(
        0x02437480,
        int32_t,
        GetHashCode_5,
        app::GenericEqualityComparer_1_System_ValueTuple_2__2* this_ptr,
        app::ValueTuple_2_Object_Object_ obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02AB1EF0,
        int32_t,
        IndexOf_3,
        app::GenericEqualityComparer_1_System_ValueTuple_2__2* this_ptr,
        app::ValueTuple_2_Object_Object___Array* array,
        app::ValueTuple_2_Object_Object_ value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02AB20A0,
        int32_t,
        LastIndexOf_3,
        app::GenericEqualityComparer_1_System_ValueTuple_2__2* this_ptr,
        app::ValueTuple_2_Object_Object___Array* array,
        app::ValueTuple_2_Object_Object_ value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x02AB0EE0, bool, Equals_6, app::GenericEqualityComparer_1_System_ValueTuple_2__2* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_6, app::GenericEqualityComparer_1_System_ValueTuple_2__2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225BDA0, void, ctor_3, app::GenericEqualityComparer_1_System_ValueTuple_2__2* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02AB1DF0,
        bool,
        Equals_7,
        app::GenericEqualityComparer_1_System_ValueTuple_2__3* this_ptr,
        app::ValueTuple_2_Object_Single_ x,
        app::ValueTuple_2_Object_Single_ y
    )
    IL2CPP_REGISTER_METHOD(
        0x02437480,
        int32_t,
        GetHashCode_7,
        app::GenericEqualityComparer_1_System_ValueTuple_2__3* this_ptr,
        app::ValueTuple_2_Object_Single_ obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02AB1EF0,
        int32_t,
        IndexOf_4,
        app::GenericEqualityComparer_1_System_ValueTuple_2__3* this_ptr,
        app::ValueTuple_2_Object_Single___Array* array,
        app::ValueTuple_2_Object_Single_ value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02AB20A0,
        int32_t,
        LastIndexOf_4,
        app::GenericEqualityComparer_1_System_ValueTuple_2__3* this_ptr,
        app::ValueTuple_2_Object_Single___Array* array,
        app::ValueTuple_2_Object_Single_ value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x02AB0EE0, bool, Equals_8, app::GenericEqualityComparer_1_System_ValueTuple_2__3* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_8, app::GenericEqualityComparer_1_System_ValueTuple_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225BDA0, void, ctor_4, app::GenericEqualityComparer_1_System_ValueTuple_2__3* this_ptr)
} // namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_System_ValueTuple_2_
