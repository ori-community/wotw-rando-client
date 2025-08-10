#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Double__Array.h>
#include <Modloader/app/structs/GenericEqualityComparer_1_System_Double_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_System_Double_ {
    IL2CPP_REGISTER_METHOD(0x02AB1090, bool, Equals_1, app::GenericEqualityComparer_1_System_Double_* this_ptr, double x, double y)
    IL2CPP_REGISTER_METHOD(0x02434E60, int32_t, GetHashCode_1, app::GenericEqualityComparer_1_System_Double_* this_ptr, double obj)
    IL2CPP_REGISTER_METHOD(
        0x02AB10B0,
        int32_t,
        IndexOf,
        app::GenericEqualityComparer_1_System_Double_* this_ptr,
        app::Double__Array* array,
        double value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02AB1140,
        int32_t,
        LastIndexOf,
        app::GenericEqualityComparer_1_System_Double_* this_ptr,
        app::Double__Array* array,
        double value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x02AB0EE0, bool, Equals_2, app::GenericEqualityComparer_1_System_Double_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::GenericEqualityComparer_1_System_Double_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225BDA0, void, ctor, app::GenericEqualityComparer_1_System_Double_* this_ptr)
} // namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_System_Double_
