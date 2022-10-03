#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CodeIdentifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CodeIdentifier__Class** type_info;
        inline app::CodeIdentifier__Class* get_class() {
            return il2cpp::get_class<app::CodeIdentifier__Class>(type_info, "System.Xml.Serialization", "CodeIdentifier");
        }
        inline app::CodeIdentifier* create() {
            return il2cpp::create_object<app::CodeIdentifier>(get_class());
        }
    } // namespace CodeIdentifier
} // namespace app::classes::types
