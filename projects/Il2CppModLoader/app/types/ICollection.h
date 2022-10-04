#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICollection__Class** type_info;
        inline app::ICollection__Class* get_class() {
            return il2cpp::get_class<app::ICollection__Class>(type_info, "System.Collections", "ICollection");
        }
        inline app::ICollection* create() {
            return il2cpp::create_object<app::ICollection>(get_class());
        }
    } // namespace ICollection
} // namespace app::classes::types
