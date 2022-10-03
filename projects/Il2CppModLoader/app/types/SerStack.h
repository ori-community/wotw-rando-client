#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerStack {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerStack__Class** type_info;
        inline app::SerStack__Class* get_class() {
            return il2cpp::get_class<app::SerStack__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "SerStack");
        }
        inline app::SerStack* create() {
            return il2cpp::create_object<app::SerStack>(get_class());
        }
    } // namespace SerStack
} // namespace app::classes::types
