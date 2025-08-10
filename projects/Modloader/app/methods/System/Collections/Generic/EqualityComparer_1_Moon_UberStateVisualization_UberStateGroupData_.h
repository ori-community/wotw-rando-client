#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_Moon_UberStateVisualization_UberStateGroupData_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UberStateGroupData.h>
#include <Modloader/app/structs/UberStateGroupData__Array.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_Moon_UberStateVisualization_UberStateGroupData_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_Moon_UberStateVisualization_UberStateGroupData_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x02D3CE70, app::EqualityComparer_1_Moon_UberStateVisualization_UberStateGroupData_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x02D3C880,
        int32_t,
        IndexOf,
        app::EqualityComparer_1_Moon_UberStateVisualization_UberStateGroupData_* this_ptr,
        app::UberStateGroupData__Array* array,
        app::UberStateGroupData value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02D3C9D0,
        int32_t,
        LastIndexOf,
        app::EqualityComparer_1_Moon_UberStateVisualization_UberStateGroupData_* this_ptr,
        app::UberStateGroupData__Array* array,
        app::UberStateGroupData value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02D3CB10,
        int32_t,
        IEqualityComparer_GetHashCode,
        app::EqualityComparer_1_Moon_UberStateVisualization_UberStateGroupData_* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02D3CC40,
        bool,
        IEqualityComparer_Equals,
        app::EqualityComparer_1_Moon_UberStateVisualization_UberStateGroupData_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::EqualityComparer_1_Moon_UberStateVisualization_UberStateGroupData_* this_ptr)
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_Moon_UberStateVisualization_UberStateGroupData_
