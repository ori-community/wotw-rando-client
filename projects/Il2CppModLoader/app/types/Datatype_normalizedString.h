#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_normalizedString {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_normalizedString__Class** type_info;
        inline app::Datatype_normalizedString__Class* get_class() {
            return il2cpp::get_class<app::Datatype_normalizedString__Class>(type_info, "System.Xml.Schema", "Datatype_normalizedString");
        }
        inline app::Datatype_normalizedString* create() {
            return il2cpp::create_object<app::Datatype_normalizedString>(get_class());
        }
    } // namespace Datatype_normalizedString
} // namespace app::classes::types
