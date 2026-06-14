#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_Visitor.h>
#include <Modloader/app/structs/ValueTuple_2_Type_System_Reflection_FieldInfo_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0283D820,
        bool,
        TryGetValue,
        app::Dictionary_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_* this_ptr,
        app::ValueTuple_2_Type_System_Reflection_FieldInfo_ key,
        app::DynamicInstantiationScanner_Visitor** value
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B630,
        void,
        set_Item,
        app::Dictionary_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_* this_ptr,
        app::ValueTuple_2_Type_System_Reflection_FieldInfo_ key,
        app::DynamicInstantiationScanner_Visitor* value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_ValueTuple_2_DynamicInstantiationScanner_Visitor_
