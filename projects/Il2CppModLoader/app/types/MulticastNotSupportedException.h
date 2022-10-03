#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MulticastNotSupportedException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MulticastNotSupportedException__Class** type_info;
        inline app::MulticastNotSupportedException__Class* get_class() {
            return il2cpp::get_class<app::MulticastNotSupportedException__Class>(type_info, "System", "MulticastNotSupportedException");
        }
        inline app::MulticastNotSupportedException* create() {
            return il2cpp::create_object<app::MulticastNotSupportedException>(get_class());
        }
    } // namespace MulticastNotSupportedException
} // namespace app::classes::types
