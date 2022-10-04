#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IHashCodeProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IHashCodeProvider__Class** type_info;
        inline app::IHashCodeProvider__Class* get_class() {
            return il2cpp::get_class<app::IHashCodeProvider__Class>(type_info, "System.Collections", "IHashCodeProvider");
        }
        inline app::IHashCodeProvider* create() {
            return il2cpp::create_object<app::IHashCodeProvider>(get_class());
        }
    } // namespace IHashCodeProvider
} // namespace app::classes::types
