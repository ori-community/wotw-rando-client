#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeResourceSet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeResourceSet__Class** type_info;
        inline app::RuntimeResourceSet__Class* get_class() {
            return il2cpp::get_class<app::RuntimeResourceSet__Class>(type_info, "System.Resources", "RuntimeResourceSet");
        }
        inline app::RuntimeResourceSet* create() {
            return il2cpp::create_object<app::RuntimeResourceSet>(get_class());
        }
    } // namespace RuntimeResourceSet
} // namespace app::classes::types
