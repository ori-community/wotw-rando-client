#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsPortableReflection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsPortableReflection__Class** type_info;
        inline app::fsPortableReflection__Class* get_class() {
            return il2cpp::get_class<app::fsPortableReflection__Class>(type_info, "FullSerializer.Internal", "fsPortableReflection");
        }
        inline app::fsPortableReflection* create() {
            return il2cpp::create_object<app::fsPortableReflection>(get_class());
        }
    } // namespace fsPortableReflection
} // namespace app::classes::types
