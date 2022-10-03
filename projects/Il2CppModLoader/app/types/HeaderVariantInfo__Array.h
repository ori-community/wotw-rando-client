#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HeaderVariantInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HeaderVariantInfo__Array__Class** type_info;
        inline app::HeaderVariantInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::HeaderVariantInfo__Array__Class>(type_info, "System.Net", "HeaderVariantInfo[]");
        }
        inline app::HeaderVariantInfo__Array* create() {
            return il2cpp::create_object<app::HeaderVariantInfo__Array>(get_class());
        }
    } // namespace HeaderVariantInfo__Array
} // namespace app::classes::types
