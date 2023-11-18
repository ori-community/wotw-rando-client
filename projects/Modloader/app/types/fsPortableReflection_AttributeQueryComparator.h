#pragma once
#include <Modloader/app/structs/fsPortableReflection_AttributeQueryComparator.h>
#include <Modloader/app/structs/fsPortableReflection_AttributeQueryComparator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsPortableReflection_AttributeQueryComparator {
        inline app::fsPortableReflection_AttributeQueryComparator__Class** type_info() {
            static app::fsPortableReflection_AttributeQueryComparator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsPortableReflection_AttributeQueryComparator__Class**)(modloader::win::memory::resolve_rva(0x04731850));
            }
            return cache;
        }
        inline app::fsPortableReflection_AttributeQueryComparator__Class* get_class() {
            return il2cpp::get_nested_class<app::fsPortableReflection_AttributeQueryComparator__Class>(type_info(), "FullSerializer.Internal", "fsPortableReflection", "AttributeQueryComparator");
        }
        inline app::fsPortableReflection_AttributeQueryComparator* create() {
            return il2cpp::create_object<app::fsPortableReflection_AttributeQueryComparator>(get_class());
        }
    } // namespace fsPortableReflection_AttributeQueryComparator
} // namespace app::classes::types
