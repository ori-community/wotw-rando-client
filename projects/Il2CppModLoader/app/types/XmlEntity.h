#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlEntity__Class** type_info;
        inline app::XmlEntity__Class* get_class() {
            return il2cpp::get_class<app::XmlEntity__Class>(type_info, "System.Xml", "XmlEntity");
        }
        inline app::XmlEntity* create() {
            return il2cpp::create_object<app::XmlEntity>(get_class());
        }
    } // namespace XmlEntity
} // namespace app::classes::types
