#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicPropertyCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicPropertyCollection__Class** type_info;
        inline app::DynamicPropertyCollection__Class* get_class() {
            return il2cpp::get_class<app::DynamicPropertyCollection__Class>(type_info, "System.Runtime.Remoting.Contexts", "DynamicPropertyCollection");
        }
        inline app::DynamicPropertyCollection* create() {
            return il2cpp::create_object<app::DynamicPropertyCollection>(get_class());
        }
    } // namespace DynamicPropertyCollection
} // namespace app::classes::types
