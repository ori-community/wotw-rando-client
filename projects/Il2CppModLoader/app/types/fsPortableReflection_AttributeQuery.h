#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsPortableReflection_AttributeQuery {
        namespace {
            app::fsPortableReflection_AttributeQuery__Class* type_info_ref = nullptr;
        }
        app::fsPortableReflection_AttributeQuery__Class** type_info = &type_info_ref;
        inline app::fsPortableReflection_AttributeQuery__Class* get_class() {
            return il2cpp::get_nested_class<app::fsPortableReflection_AttributeQuery__Class>(type_info, "FullSerializer.Internal", "fsPortableReflection", "AttributeQuery");
        }
        inline app::fsPortableReflection_AttributeQuery* create() {
            return il2cpp::create_object<app::fsPortableReflection_AttributeQuery>(get_class());
        }
        inline app::fsPortableReflection_AttributeQuery__Boxed* box(app::fsPortableReflection_AttributeQuery value) {
            return il2cpp::box_value<app::fsPortableReflection_AttributeQuery__Boxed>(get_class(), value);
        }
        inline app::fsPortableReflection_AttributeQuery__Array* create_array(int size) {
            return il2cpp::array_new<app::fsPortableReflection_AttributeQuery__Array>(get_class(), size);
        }
        inline app::fsPortableReflection_AttributeQuery__Array* create_array(const std::vector<app::fsPortableReflection_AttributeQuery__Boxed>& items) {
            return il2cpp::array_new<app::fsPortableReflection_AttributeQuery__Array>(get_class(), items);
        }
    } // namespace fsPortableReflection_AttributeQuery
} // namespace app::classes::types
