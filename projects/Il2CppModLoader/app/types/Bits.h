#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Bits {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Bits__Class** type_info;
        inline app::Bits__Class* get_class() {
            return il2cpp::get_class<app::Bits__Class>(type_info, "System.Xml", "Bits");
        }
        inline app::Bits* create() {
            return il2cpp::create_object<app::Bits>(get_class());
        }
    } // namespace Bits
} // namespace app::classes::types
