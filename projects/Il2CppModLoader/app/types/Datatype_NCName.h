#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_NCName {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_NCName__Class** type_info;
        inline app::Datatype_NCName__Class* get_class() {
            return il2cpp::get_class<app::Datatype_NCName__Class>(type_info, "System.Xml.Schema", "Datatype_NCName");
        }
        inline app::Datatype_NCName* create() {
            return il2cpp::create_object<app::Datatype_NCName>(get_class());
        }
    } // namespace Datatype_NCName
} // namespace app::classes::types
