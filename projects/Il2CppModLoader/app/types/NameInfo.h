#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NameInfo__Class** type_info;
        inline app::NameInfo__Class* get_class() {
            return il2cpp::get_class<app::NameInfo__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "NameInfo");
        }
        inline app::NameInfo* create() {
            return il2cpp::create_object<app::NameInfo>(get_class());
        }
    } // namespace NameInfo
} // namespace app::classes::types
