#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeTranslator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeTranslator__Class** type_info;
        inline app::TypeTranslator__Class* get_class() {
            return il2cpp::get_class<app::TypeTranslator__Class>(type_info, "System.Xml.Serialization", "TypeTranslator");
        }
        inline app::TypeTranslator* create() {
            return il2cpp::create_object<app::TypeTranslator>(get_class());
        }
    } // namespace TypeTranslator
} // namespace app::classes::types
