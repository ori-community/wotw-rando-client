#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/IEnumerable_1_System_Type_.h>
#include <Modloader/app/structs/UberStateConditionHelper_c.h>

namespace app::classes::UberStateConditionHelper___c {
    IL2CPP_REGISTER_METHOD(0x0314A290, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UberStateConditionHelper_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x022638E0,
        app::IEnumerable_1_System_Type_*,
        _BuildConditionTypeData_b__3_0,
        app::UberStateConditionHelper_c* this_ptr,
        app::Assembly* x
    )
} // namespace app::classes::UberStateConditionHelper___c
