#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_2_Object_Object_.h>
#include <Modloader/app/structs/GroupedEnumerable_3_System_Object_System_Object_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Linq_IGrouping_2_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Object_.h>

namespace app::classes::System::Linq::GroupedEnumerable_3_System_Object_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x02546FA0,
        void,
        ctor,
        app::GroupedEnumerable_3_System_Object_System_Object_System_Object_* this_ptr,
        app::IEnumerable_1_System_Object_* source,
        app::Func_2_Object_Object_* key_selector,
        app::Func_2_Object_Object_* element_selector,
        app::IEqualityComparer_1_System_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02546F40,
        app::IEnumerator_1_System_Linq_IGrouping_2_*,
        GetEnumerator,
        app::GroupedEnumerable_3_System_Object_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0225B610,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::GroupedEnumerable_3_System_Object_System_Object_System_Object_* this_ptr
    )
} // namespace app::classes::System::Linq::GroupedEnumerable_3_System_Object_System_Object_System_Object_
