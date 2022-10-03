#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValidationEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ValidationEventHandler__Class** type_info;
        inline app::ValidationEventHandler__Class* get_class() {
            return il2cpp::get_class<app::ValidationEventHandler__Class>(type_info, "System.Xml.Schema", "ValidationEventHandler");
        }
        inline app::ValidationEventHandler* create() {
            return il2cpp::create_object<app::ValidationEventHandler>(get_class());
        }
    } // namespace ValidationEventHandler
} // namespace app::classes::types
