#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnumInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnumInfo__Class** type_info;
        inline app::EnumInfo__Class* get_class() {
            return il2cpp::get_class<app::EnumInfo__Class>(type_info, "Newtonsoft.Json.Utilities", "EnumInfo");
        }
        inline app::EnumInfo* create() {
            return il2cpp::create_object<app::EnumInfo>(get_class());
        }
    } // namespace EnumInfo
} // namespace app::classes::types
