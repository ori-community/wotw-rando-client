#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Double__Array.h>
#include <Modloader/app/structs/EqualityComparer_1_System_Double_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_System_Double_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_System_Double_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x02DA4ED0, app::EqualityComparer_1_System_Double_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x02DA5830,
        int32_t,
        IndexOf,
        app::EqualityComparer_1_System_Double_* this_ptr,
        app::Double__Array* array,
        double value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02DA58E0,
        int32_t,
        LastIndexOf,
        app::EqualityComparer_1_System_Double_* this_ptr,
        app::Double__Array* array,
        double value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x02DA5990, int32_t, IEqualityComparer_GetHashCode, app::EqualityComparer_1_System_Double_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x02DA5A80, bool, IEqualityComparer_Equals, app::EqualityComparer_1_System_Double_* this_ptr, app::Object* x, app::Object* y)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::EqualityComparer_1_System_Double_* this_ptr)
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_System_Double_
