#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PropertyCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PropertyCollection__Class** type_info;
        inline app::PropertyCollection__Class* get_class() {
            return il2cpp::get_class<app::PropertyCollection__Class>(type_info, "System.Data", "PropertyCollection");
        }
        inline app::PropertyCollection* create() {
            return il2cpp::create_object<app::PropertyCollection>(get_class());
        }
    } // namespace PropertyCollection
} // namespace app::classes::types
