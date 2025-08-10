#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_.h>
#include <Modloader/app/structs/Comparison_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_*, get_Default, )
    IL2CPP_REGISTER_METHOD(
        0x0280C510,
        app::Comparer_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_*,
        Create,
        app::Comparison_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_* comparison
    )
    IL2CPP_REGISTER_METHOD(0x0280C710, app::Comparer_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x028085A0,
        int32_t,
        IComparer_Compare,
        app::Comparer_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Comparer_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Comparer_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_
