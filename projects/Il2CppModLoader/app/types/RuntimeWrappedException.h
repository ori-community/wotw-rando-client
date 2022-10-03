#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeWrappedException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeWrappedException__Class** type_info;
        inline app::RuntimeWrappedException__Class* get_class() {
            return il2cpp::get_class<app::RuntimeWrappedException__Class>(type_info, "System.Runtime.CompilerServices", "RuntimeWrappedException");
        }
        inline app::RuntimeWrappedException* create() {
            return il2cpp::create_object<app::RuntimeWrappedException>(get_class());
        }
    } // namespace RuntimeWrappedException
} // namespace app::classes::types
