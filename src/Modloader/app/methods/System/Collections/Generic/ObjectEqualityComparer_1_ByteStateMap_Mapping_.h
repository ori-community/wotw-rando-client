#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ByteStateMap_Mapping.h>
#include <Modloader/app/structs/ByteStateMap_Mapping__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_ByteStateMap_Mapping_.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_ByteStateMap_Mapping_ {
    IL2CPP_REGISTER_METHOD(
        0x01CD1020,
        bool,
        Equals_1,
        app::ObjectEqualityComparer_1_ByteStateMap_Mapping_* this_ptr,
        app::ByteStateMap_Mapping x,
        app::ByteStateMap_Mapping y
    )
    IL2CPP_REGISTER_METHOD(0x01CD10D0, int32_t, GetHashCode_1, app::ObjectEqualityComparer_1_ByteStateMap_Mapping_* this_ptr, app::ByteStateMap_Mapping obj)
    IL2CPP_REGISTER_METHOD(
        0x01CD1130,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_ByteStateMap_Mapping_* this_ptr,
        app::ByteStateMap_Mapping__Array* array,
        app::ByteStateMap_Mapping value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD12A0,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_ByteStateMap_Mapping_* this_ptr,
        app::ByteStateMap_Mapping__Array* array,
        app::ByteStateMap_Mapping value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_ByteStateMap_Mapping_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_ByteStateMap_Mapping_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_ByteStateMap_Mapping_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_ByteStateMap_Mapping_
