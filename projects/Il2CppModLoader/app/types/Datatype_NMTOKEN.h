#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_NMTOKEN {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_NMTOKEN__Class** type_info;
        inline app::Datatype_NMTOKEN__Class* get_class() {
            return il2cpp::get_class<app::Datatype_NMTOKEN__Class>(type_info, "System.Xml.Schema", "Datatype_NMTOKEN");
        }
        inline app::Datatype_NMTOKEN* create() {
            return il2cpp::create_object<app::Datatype_NMTOKEN>(get_class());
        }
    } // namespace Datatype_NMTOKEN
} // namespace app::classes::types
