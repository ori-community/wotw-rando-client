#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IControllerShake {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IControllerShake__Class** type_info;
        inline app::IControllerShake__Class* get_class() {
            return il2cpp::get_class<app::IControllerShake__Class>(type_info, "", "IControllerShake");
        }
        inline app::IControllerShake__Array* create_array(int size) {
            return il2cpp::array_new<app::IControllerShake__Array>(get_class(), size);
        }
    } // namespace IControllerShake
} // namespace app::classes::types
