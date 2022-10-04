#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IFrustumEnabled {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IFrustumEnabled__Class** type_info;
        inline app::IFrustumEnabled__Class* get_class() {
            return il2cpp::get_class<app::IFrustumEnabled__Class>(type_info, "Game", "IFrustumEnabled");
        }
        inline app::IFrustumEnabled__Array* create_array(int size) {
            return il2cpp::array_new<app::IFrustumEnabled__Array>(get_class(), size);
        }
    } // namespace IFrustumEnabled
} // namespace app::classes::types
