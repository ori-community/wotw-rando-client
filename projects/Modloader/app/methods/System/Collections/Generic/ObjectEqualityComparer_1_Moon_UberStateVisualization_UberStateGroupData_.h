#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_Moon_UberStateVisualization_UberStateGroupData_.h>
#include <Modloader/app/structs/UberStateGroupData.h>
#include <Modloader/app/structs/UberStateGroupData__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_Moon_UberStateVisualization_UberStateGroupData_ {
    IL2CPP_REGISTER_METHOD(
        0x02659C00,
        bool,
        Equals_1,
        app::ObjectEqualityComparer_1_Moon_UberStateVisualization_UberStateGroupData_* this_ptr,
        app::UberStateGroupData x,
        app::UberStateGroupData y
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0900,
        int32_t,
        GetHashCode_1,
        app::ObjectEqualityComparer_1_Moon_UberStateVisualization_UberStateGroupData_* this_ptr,
        app::UberStateGroupData obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02659CE0,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_Moon_UberStateVisualization_UberStateGroupData_* this_ptr,
        app::UberStateGroupData__Array* array,
        app::UberStateGroupData value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02659EA0,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_Moon_UberStateVisualization_UberStateGroupData_* this_ptr,
        app::UberStateGroupData__Array* array,
        app::UberStateGroupData value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CC3E60,
        bool,
        Equals_2,
        app::ObjectEqualityComparer_1_Moon_UberStateVisualization_UberStateGroupData_* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_Moon_UberStateVisualization_UberStateGroupData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_Moon_UberStateVisualization_UberStateGroupData_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_Moon_UberStateVisualization_UberStateGroupData_
