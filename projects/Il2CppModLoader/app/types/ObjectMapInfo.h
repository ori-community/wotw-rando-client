#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectMapInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjectMapInfo__Class** type_info;
        inline app::ObjectMapInfo__Class* get_class() {
            return il2cpp::get_class<app::ObjectMapInfo__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "ObjectMapInfo");
        }
        inline app::ObjectMapInfo* create() {
            return il2cpp::create_object<app::ObjectMapInfo>(get_class());
        }
    } // namespace ObjectMapInfo
} // namespace app::classes::types
