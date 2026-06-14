#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Int32_.h>
#include <Modloader/app/structs/ParameterExpression.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Int32_ {
    IL2CPP_REGISTER_METHOD(
        0x02BA5090,
        bool,
        ContainsKey,
        app::Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Int32_* this_ptr,
        app::ParameterExpression* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BCDF80,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Int32_* this_ptr,
        app::ParameterExpression* key,
        int32_t* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Int32_* this_ptr,
        app::ParameterExpression* key,
        int32_t value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BCC050,
        int32_t,
        get_Item,
        app::Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Int32_* this_ptr,
        app::ParameterExpression* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BCDB30,
        bool,
        Remove,
        app::Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Int32_* this_ptr,
        app::ParameterExpression* key
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Int32_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Int32_
