#pragma once
#include <Modloader/app/structs/fsPortableReflection_AttributeQuery.h>
#include <Modloader/app/structs/fsPortableReflection_AttributeQuery__Array.h>
#include <Modloader/app/structs/fsPortableReflection_AttributeQuery__Boxed.h>
#include <Modloader/app/structs/fsPortableReflection_AttributeQuery__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsPortableReflection_AttributeQuery {
        inline app::fsPortableReflection_AttributeQuery__Class** type_info() {
            static app::fsPortableReflection_AttributeQuery__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::fsPortableReflection_AttributeQuery__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::fsPortableReflection_AttributeQuery__Class* get_class() {
            return il2cpp::get_nested_class<app::fsPortableReflection_AttributeQuery__Class>(type_info(), "FullSerializer.Internal", "fsPortableReflection", "AttributeQuery");
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
        inline app::fsPortableReflection_AttributeQuery__Array* create_array(const std::vector<app::fsPortableReflection_AttributeQuery>& items) {
            return il2cpp::array_new<app::fsPortableReflection_AttributeQuery__Array>(get_class(), items);
        }
    } // namespace fsPortableReflection_AttributeQuery
} // namespace app::classes::types
