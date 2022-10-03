#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsPortableReflection_AttributeQueryComparator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsPortableReflection_AttributeQueryComparator__Class** type_info;
        inline app::fsPortableReflection_AttributeQueryComparator__Class* get_class() {
            return il2cpp::get_nested_class<app::fsPortableReflection_AttributeQueryComparator__Class>(type_info, "FullSerializer.Internal", "fsPortableReflection", "AttributeQueryComparator");
        }
        inline app::fsPortableReflection_AttributeQueryComparator* create() {
            return il2cpp::create_object<app::fsPortableReflection_AttributeQueryComparator>(get_class());
        }
    } // namespace fsPortableReflection_AttributeQueryComparator
} // namespace app::classes::types
