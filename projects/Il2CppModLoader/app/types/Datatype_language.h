#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_language {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_language__Class** type_info;
        inline app::Datatype_language__Class* get_class() {
            return il2cpp::get_class<app::Datatype_language__Class>(type_info, "System.Xml.Schema", "Datatype_language");
        }
        inline app::Datatype_language* create() {
            return il2cpp::create_object<app::Datatype_language>(get_class());
        }
    } // namespace Datatype_language
} // namespace app::classes::types
