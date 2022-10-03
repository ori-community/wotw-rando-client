#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_Name {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_Name__Class** type_info;
        inline app::Datatype_Name__Class* get_class() {
            return il2cpp::get_class<app::Datatype_Name__Class>(type_info, "System.Xml.Schema", "Datatype_Name");
        }
        inline app::Datatype_Name* create() {
            return il2cpp::create_object<app::Datatype_Name>(get_class());
        }
    } // namespace Datatype_Name
} // namespace app::classes::types
