#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeAssembly {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeAssembly__Class** type_info;
        inline app::RuntimeAssembly__Class* get_class() {
            return il2cpp::get_class<app::RuntimeAssembly__Class>(type_info, "System.Reflection", "RuntimeAssembly");
        }
        inline app::RuntimeAssembly* create() {
            return il2cpp::create_object<app::RuntimeAssembly>(get_class());
        }
    } // namespace RuntimeAssembly
} // namespace app::classes::types
