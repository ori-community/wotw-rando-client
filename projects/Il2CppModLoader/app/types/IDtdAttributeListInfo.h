#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDtdAttributeListInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDtdAttributeListInfo__Class** type_info;
        inline app::IDtdAttributeListInfo__Class* get_class() {
            return il2cpp::get_class<app::IDtdAttributeListInfo__Class>(type_info, "System.Xml", "IDtdAttributeListInfo");
        }
    } // namespace IDtdAttributeListInfo
} // namespace app::classes::types
