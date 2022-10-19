#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsPortableReflection_AttributeQuery__Array {
        namespace {
            inline app::fsPortableReflection_AttributeQuery__Array__Class* type_info_ref = nullptr;
        }
        inline app::fsPortableReflection_AttributeQuery__Array__Class** type_info = &type_info_ref;
        inline app::fsPortableReflection_AttributeQuery__Array__Class* get_class() {
            return il2cpp::get_class<app::fsPortableReflection_AttributeQuery__Array__Class>(type_info, "FullSerializer.Internal", "fsPortableReflection+AttributeQuery[]");
        }
        inline app::fsPortableReflection_AttributeQuery__Array* create() {
            return il2cpp::create_object<app::fsPortableReflection_AttributeQuery__Array>(get_class());
        }
    } // namespace fsPortableReflection_AttributeQuery__Array
} // namespace app::classes::types
