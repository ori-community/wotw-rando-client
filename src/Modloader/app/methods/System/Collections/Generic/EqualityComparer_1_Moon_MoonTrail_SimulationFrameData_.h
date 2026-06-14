#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_Moon_MoonTrail_SimulationFrameData_.h>
#include <Modloader/app/structs/MoonTrail_SimulationFrameData.h>
#include <Modloader/app/structs/MoonTrail_SimulationFrameData__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_Moon_MoonTrail_SimulationFrameData_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_Moon_MoonTrail_SimulationFrameData_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x02CE17B0, app::EqualityComparer_1_Moon_MoonTrail_SimulationFrameData_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x02CC4B00,
        int32_t,
        IndexOf,
        app::EqualityComparer_1_Moon_MoonTrail_SimulationFrameData_* this_ptr,
        app::MoonTrail_SimulationFrameData__Array* array,
        app::MoonTrail_SimulationFrameData value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02CC4C10,
        int32_t,
        LastIndexOf,
        app::EqualityComparer_1_Moon_MoonTrail_SimulationFrameData_* this_ptr,
        app::MoonTrail_SimulationFrameData__Array* array,
        app::MoonTrail_SimulationFrameData value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02CC4D20,
        int32_t,
        IEqualityComparer_GetHashCode,
        app::EqualityComparer_1_Moon_MoonTrail_SimulationFrameData_* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02CC4E30,
        bool,
        IEqualityComparer_Equals,
        app::EqualityComparer_1_Moon_MoonTrail_SimulationFrameData_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::EqualityComparer_1_Moon_MoonTrail_SimulationFrameData_* this_ptr)
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_Moon_MoonTrail_SimulationFrameData_
