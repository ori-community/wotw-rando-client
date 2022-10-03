#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ButtonIconUtility {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ButtonIconUtility__Class** type_info;
        inline app::ButtonIconUtility__Class* get_class() {
            return il2cpp::get_class<app::ButtonIconUtility__Class>(type_info, "", "ButtonIconUtility");
        }
        inline app::ButtonIconUtility* create() {
            return il2cpp::create_object<app::ButtonIconUtility>(get_class());
        }
    } // namespace ButtonIconUtility
} // namespace app::classes::types
