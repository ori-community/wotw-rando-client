#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CacheDict_2_System_Type_System_Func_5_.h>
#include <Modloader/app/structs/Func_5_Sy_L_Express_Expres_St_Boo_Sy_Collec_Object_ReadOnlyColle_1_S_L_Expres_LambdaExpre_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Dynamic::Utils::CacheDict_2_System_Type_System_Func_5_ {
    IL2CPP_REGISTER_METHOD(0x02879320, void, ctor, app::CacheDict_2_System_Type_System_Func_5_* this_ptr, int32_t size)
    IL2CPP_REGISTER_METHOD(
        0x028793D0,
        bool,
        TryGetValue,
        app::CacheDict_2_System_Type_System_Func_5_* this_ptr,
        app::Type* key,
        app::
            Func_5_System_Linq_Expressions_Expression_String_Boolean_System_Collections_ObjectModel_ReadOnlyCollection_1_System_Linq_Expressions_LambdaExpression_**
                value
    )
    IL2CPP_REGISTER_METHOD(
        0x028796E0,
        void,
        set_Item,
        app::CacheDict_2_System_Type_System_Func_5_* this_ptr,
        app::Type* key,
        app::
            Func_5_System_Linq_Expressions_Expression_String_Boolean_System_Collections_ObjectModel_ReadOnlyCollection_1_System_Linq_Expressions_LambdaExpression_*
                value
    )
} // namespace app::classes::System::Dynamic::Utils::CacheDict_2_System_Type_System_Func_5_
