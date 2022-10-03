#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Lever {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Lever__Class** type_info;
        inline app::Lever__Class* get_class() {
            return il2cpp::get_class<app::Lever__Class>(type_info, "", "Lever");
        }
        inline app::Lever* create() {
            return il2cpp::create_object<app::Lever>(get_class());
        }
    } // namespace Lever
} // namespace app::classes::types
