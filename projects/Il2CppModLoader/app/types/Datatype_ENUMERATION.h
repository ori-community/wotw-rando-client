#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_ENUMERATION {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_ENUMERATION__Class** type_info;
        inline app::Datatype_ENUMERATION__Class* get_class() {
            return il2cpp::get_class<app::Datatype_ENUMERATION__Class>(type_info, "System.Xml.Schema", "Datatype_ENUMERATION");
        }
        inline app::Datatype_ENUMERATION* create() {
            return il2cpp::create_object<app::Datatype_ENUMERATION>(get_class());
        }
    } // namespace Datatype_ENUMERATION
} // namespace app::classes::types
