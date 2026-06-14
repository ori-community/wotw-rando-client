#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_System_Reflection_PropertyInfo_.h>
#include <Modloader/app/structs/List_1_System_Reflection_PropertyInfo_.h>
#include <Modloader/app/structs/PropertyInfo_1.h>

namespace app::classes::System::Collections::Generic::List_1_System_Reflection_PropertyInfo_ {
    IL2CPP_REGISTER_METHOD(
        0x02FE8360,
        void,
        ctor,
        app::List_1_System_Reflection_PropertyInfo_* this_ptr,
        app::IEnumerable_1_System_Reflection_PropertyInfo_* collection
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange,
        app::List_1_System_Reflection_PropertyInfo_* this_ptr,
        app::IEnumerable_1_System_Reflection_PropertyInfo_* collection
    )
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::PropertyInfo_1*, get_Item, app::List_1_System_Reflection_PropertyInfo_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025EFC80, void, set_Item, app::List_1_System_Reflection_PropertyInfo_* this_ptr, int32_t index, app::PropertyInfo_1* value)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_System_Reflection_PropertyInfo_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_System_Reflection_PropertyInfo_
