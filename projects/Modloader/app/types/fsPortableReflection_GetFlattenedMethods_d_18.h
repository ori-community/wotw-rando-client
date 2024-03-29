#pragma once
#include <Modloader/app/structs/fsPortableReflection_GetFlattenedMethods_d_18.h>
#include <Modloader/app/structs/fsPortableReflection_GetFlattenedMethods_d_18__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsPortableReflection_GetFlattenedMethods_d_18 {
        inline app::fsPortableReflection_GetFlattenedMethods_d_18__Class** type_info() {
            static app::fsPortableReflection_GetFlattenedMethods_d_18__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsPortableReflection_GetFlattenedMethods_d_18__Class**)(modloader::win::memory::resolve_rva(0x047503F8));
            }
            return cache;
        }
        inline app::fsPortableReflection_GetFlattenedMethods_d_18__Class* get_class() {
            return il2cpp::get_nested_class<app::fsPortableReflection_GetFlattenedMethods_d_18__Class>(type_info(), "FullSerializer.Internal", "fsPortableReflection", "<GetFlattenedMethods>d__18");
        }
        inline app::fsPortableReflection_GetFlattenedMethods_d_18* create() {
            return il2cpp::create_object<app::fsPortableReflection_GetFlattenedMethods_d_18>(get_class());
        }
    } // namespace fsPortableReflection_GetFlattenedMethods_d_18
} // namespace app::classes::types
