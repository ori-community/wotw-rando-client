#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDtdAttributeListInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDtdAttributeListInfo__Class** type_info;
        inline app::IDtdAttributeListInfo__Class* get_class() {
            return il2cpp::get_class<app::IDtdAttributeListInfo__Class>(type_info, "System.Xml", "IDtdAttributeListInfo");
        }
        inline app::IDtdAttributeListInfo* create() {
            return il2cpp::create_object<app::IDtdAttributeListInfo>(get_class());
        }
    } // namespace IDtdAttributeListInfo
} // namespace app::classes::types
