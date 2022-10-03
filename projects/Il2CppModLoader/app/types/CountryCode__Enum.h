#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CountryCode__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CountryCode__Enum__Class** type_info;
        inline app::CountryCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::CountryCode__Enum__Class>(type_info, "PlayFab.ClientModels", "CountryCode");
        }
        inline app::CountryCode__Enum* create() {
            return il2cpp::create_object<app::CountryCode__Enum>(get_class());
        }
    } // namespace CountryCode__Enum
} // namespace app::classes::types
