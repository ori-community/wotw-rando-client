#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_QName {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_QName__Class** type_info;
        inline app::Datatype_QName__Class* get_class() {
            return il2cpp::get_class<app::Datatype_QName__Class>(type_info, "System.Xml.Schema", "Datatype_QName");
        }
        inline app::Datatype_QName* create() {
            return il2cpp::create_object<app::Datatype_QName>(get_class());
        }
    } // namespace Datatype_QName
} // namespace app::classes::types
