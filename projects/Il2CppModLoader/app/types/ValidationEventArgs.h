#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValidationEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ValidationEventArgs__Class** type_info;
        inline app::ValidationEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ValidationEventArgs__Class>(type_info, "System.Xml.Schema", "ValidationEventArgs");
        }
        inline app::ValidationEventArgs* create() {
            return il2cpp::create_object<app::ValidationEventArgs>(get_class());
        }
    } // namespace ValidationEventArgs
} // namespace app::classes::types
