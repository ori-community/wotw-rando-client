#pragma once
#include <Modloader/app/structs/KeyValuePair_2_FullSerializ_Intern_fsPortableReflecti_AttributeQue_Syst_Attribu___Arr__Cla.h>
#include <Modloader/app/structs/KeyValuePair_2_FullSerialize_Interna_fsPortableReflectio_AttributeQuer_Syste_Attribu___Arr.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyValuePair_2_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Attribute___Array {
        inline app::KeyValuePair_2_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Attribute___Array__Class** type_info() {
            static app::KeyValuePair_2_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Attribute___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeyValuePair_2_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Attribute___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeyValuePair_2_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Attribute___Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePair_2_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Attribute___Array__Class>(type_info(), "System.Collections.Generic", "KeyValuePair`2[FullSerializer.Internal.fsPortableReflection+AttributeQuery,System.Attribute][]");
        }
        inline app::KeyValuePair_2_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Attribute___Array* create() {
            return il2cpp::create_object<app::KeyValuePair_2_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Attribute___Array>(get_class());
        }
    } // namespace KeyValuePair_2_FullSerializer_Internal_fsPortableReflection_AttributeQuery_System_Attribute___Array
} // namespace app::classes::types
