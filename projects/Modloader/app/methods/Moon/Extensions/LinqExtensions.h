#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Object_.h>
#include <Modloader/app/structs/Action_2_Object_Int32_.h>
#include <Modloader/app/structs/Func_2_Object_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>

namespace app::classes::Moon::Extensions::LinqExtensions {
    IL2CPP_REGISTER_METHOD(
        0x00E7D170,
        app::IEnumerable_1_System_Object_*,
        DistinctBy,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_Object_* key_selector
    )
    IL2CPP_REGISTER_METHOD(0x0154F980, void, Each_1, app::IEnumerable_1_System_Object_* source, app::Action_1_Object_* fn)
    IL2CPP_REGISTER_METHOD(0x0154FBA0, void, Each_2, app::IEnumerable_1_System_Object_* source, app::Action_2_Object_Int32_* fn)
} // namespace app::classes::Moon::Extensions::LinqExtensions
