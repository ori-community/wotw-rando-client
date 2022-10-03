#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlDataLoader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlDataLoader__Class** type_info;
        inline app::XmlDataLoader__Class* get_class() {
            return il2cpp::get_class<app::XmlDataLoader__Class>(type_info, "System.Data", "XmlDataLoader");
        }
        inline app::XmlDataLoader* create() {
            return il2cpp::create_object<app::XmlDataLoader>(get_class());
        }
    } // namespace XmlDataLoader
} // namespace app::classes::types
