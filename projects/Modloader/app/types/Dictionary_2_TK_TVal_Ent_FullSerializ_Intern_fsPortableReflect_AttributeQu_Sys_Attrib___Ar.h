#pragma once
#include <Modloader/app/structs/Dictionary_2_TK_TVa_En_FullSeriali_Inter_fsPortableReflect_AttributeQu_Sys_Attrib___Ar__Cl.h>
#include <Modloader/app/structs/Dictionary_2_TK_TVal_Ent_FullSerializ_Intern_fsPortableReflect_AttributeQu_Sys_Attrib___Ar.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Attribute___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Attribute___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Attribute___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Attribute___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Attribute___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Attribute___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[FullSerializer.Internal.fsPortableReflection+AttributeQuery,System.Attribute][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Attribute___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Attribute___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Attribute___Array
} // namespace app::classes::types
