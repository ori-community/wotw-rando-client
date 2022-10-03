#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContinentCode__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ContinentCode__Enum__Class** type_info;
        inline app::ContinentCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ContinentCode__Enum__Class>(type_info, "PlayFab.ClientModels", "ContinentCode");
        }
        inline app::ContinentCode__Enum* create() {
            return il2cpp::create_object<app::ContinentCode__Enum>(get_class());
        }
    } // namespace ContinentCode__Enum
} // namespace app::classes::types
