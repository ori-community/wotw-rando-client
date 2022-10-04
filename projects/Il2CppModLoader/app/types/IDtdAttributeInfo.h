#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDtdAttributeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDtdAttributeInfo__Class** type_info;
        inline app::IDtdAttributeInfo__Class* get_class() {
            return il2cpp::get_class<app::IDtdAttributeInfo__Class>(type_info, "System.Xml", "IDtdAttributeInfo");
        }
        inline app::IDtdAttributeInfo* create() {
            return il2cpp::create_object<app::IDtdAttributeInfo>(get_class());
        }
    } // namespace IDtdAttributeInfo
} // namespace app::classes::types
