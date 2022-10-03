#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BitStack {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BitStack__Class** type_info;
        inline app::BitStack__Class* get_class() {
            return il2cpp::get_class<app::BitStack__Class>(type_info, "System.Xml", "BitStack");
        }
        inline app::BitStack* create() {
            return il2cpp::create_object<app::BitStack>(get_class());
        }
    } // namespace BitStack
} // namespace app::classes::types
