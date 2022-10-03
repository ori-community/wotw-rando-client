#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CaseInsensitiveHashCodeProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CaseInsensitiveHashCodeProvider__Class** type_info;
        inline app::CaseInsensitiveHashCodeProvider__Class* get_class() {
            return il2cpp::get_class<app::CaseInsensitiveHashCodeProvider__Class>(type_info, "System.Collections", "CaseInsensitiveHashCodeProvider");
        }
        inline app::CaseInsensitiveHashCodeProvider* create() {
            return il2cpp::create_object<app::CaseInsensitiveHashCodeProvider>(get_class());
        }
    } // namespace CaseInsensitiveHashCodeProvider
} // namespace app::classes::types
