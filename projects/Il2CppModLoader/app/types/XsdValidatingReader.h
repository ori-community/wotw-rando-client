#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XsdValidatingReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XsdValidatingReader__Class** type_info;
        inline app::XsdValidatingReader__Class* get_class() {
            return il2cpp::get_class<app::XsdValidatingReader__Class>(type_info, "System.Xml", "XsdValidatingReader");
        }
        inline app::XsdValidatingReader* create() {
            return il2cpp::create_object<app::XsdValidatingReader>(get_class());
        }
    } // namespace XsdValidatingReader
} // namespace app::classes::types
