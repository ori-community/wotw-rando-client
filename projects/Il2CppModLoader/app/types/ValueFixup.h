#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValueFixup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ValueFixup__Class** type_info;
        inline app::ValueFixup__Class* get_class() {
            return il2cpp::get_class<app::ValueFixup__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "ValueFixup");
        }
        inline app::ValueFixup* create() {
            return il2cpp::create_object<app::ValueFixup>(get_class());
        }
    } // namespace ValueFixup
} // namespace app::classes::types
