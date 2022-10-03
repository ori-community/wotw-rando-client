#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleActivationStatus__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TitleActivationStatus__Enum__Class** type_info;
        inline app::TitleActivationStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::TitleActivationStatus__Enum__Class>(type_info, "PlayFab.ClientModels", "TitleActivationStatus");
        }
        inline app::TitleActivationStatus__Enum* create() {
            return il2cpp::create_object<app::TitleActivationStatus__Enum>(get_class());
        }
    } // namespace TitleActivationStatus__Enum
} // namespace app::classes::types
