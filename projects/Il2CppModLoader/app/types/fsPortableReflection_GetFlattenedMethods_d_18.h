#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsPortableReflection_GetFlattenedMethods_d_18 {
        inline app::fsPortableReflection_GetFlattenedMethods_d_18__Class** type_info = (app::fsPortableReflection_GetFlattenedMethods_d_18__Class**)(modloader::win::memory::resolve_rva(0x047503F8));
        inline app::fsPortableReflection_GetFlattenedMethods_d_18__Class* get_class() {
            return il2cpp::get_nested_class<app::fsPortableReflection_GetFlattenedMethods_d_18__Class>(type_info, "FullSerializer.Internal", "fsPortableReflection", "<GetFlattenedMethods>d__18");
        }
        inline app::fsPortableReflection_GetFlattenedMethods_d_18* create() {
            return il2cpp::create_object<app::fsPortableReflection_GetFlattenedMethods_d_18>(get_class());
        }
    } // namespace fsPortableReflection_GetFlattenedMethods_d_18
} // namespace app::classes::types
