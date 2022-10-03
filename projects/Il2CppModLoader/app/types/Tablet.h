#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tablet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Tablet__Class** type_info;
        inline app::Tablet__Class* get_class() {
            return il2cpp::get_class<app::Tablet__Class>(type_info, "uWintab", "Tablet");
        }
        inline app::Tablet* create() {
            return il2cpp::create_object<app::Tablet>(get_class());
        }
    } // namespace Tablet
} // namespace app::classes::types
