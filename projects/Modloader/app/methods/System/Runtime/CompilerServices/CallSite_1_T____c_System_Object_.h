#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CallSite_1_T_c_System_Object_.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ParameterExpression.h>
#include <Modloader/app/structs/ParameterInfo_1.h>

namespace app::classes::System::Runtime::CompilerServices::CallSite_1_T____c_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x019DE4F0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::CallSite_1_T_c_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0276D080,
        app::ParameterExpression*,
        _CreateCustomUpdateDelegate_b__17_0,
        app::CallSite_1_T_c_System_Object_* this_ptr,
        app::ParameterInfo_1* p
    )
    IL2CPP_REGISTER_METHOD(
        0x0276D160,
        app::Expression*,
        _CreateCustomUpdateDelegate_b__17_1,
        app::CallSite_1_T_c_System_Object_* this_ptr,
        app::ParameterExpression* p
    )
    IL2CPP_REGISTER_METHOD(
        0x0276D230,
        app::ParameterExpression*,
        _CreateCustomNoMatchDelegate_b__18_0,
        app::CallSite_1_T_c_System_Object_* this_ptr,
        app::ParameterInfo_1* p
    )
} // namespace app::classes::System::Runtime::CompilerServices::CallSite_1_T____c_System_Object_
