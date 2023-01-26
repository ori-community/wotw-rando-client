#pragma once
#include <Modloader/app/structs/fsPortableReflection_AttributeQuery__Array.h>
#include <Modloader/app/structs/fsPortableReflection_AttributeQuery__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsPortableReflection_AttributeQuery__Array {
        inline app::fsPortableReflection_AttributeQuery__Array__Class** type_info() {
            static app::fsPortableReflection_AttributeQuery__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::fsPortableReflection_AttributeQuery__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::fsPortableReflection_AttributeQuery__Array__Class* get_class() {
            return il2cpp::get_class<app::fsPortableReflection_AttributeQuery__Array__Class>(type_info(), "FullSerializer.Internal", "fsPortableReflection+AttributeQuery[]");
        }
        inline app::fsPortableReflection_AttributeQuery__Array* create() {
            return il2cpp::create_object<app::fsPortableReflection_AttributeQuery__Array>(get_class());
        }
    } // namespace fsPortableReflection_AttributeQuery__Array
} // namespace app::classes::types
