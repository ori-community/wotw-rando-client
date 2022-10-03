#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_fixed {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_fixed__Class** type_info;
        inline app::Datatype_fixed__Class* get_class() {
            return il2cpp::get_class<app::Datatype_fixed__Class>(type_info, "System.Xml.Schema", "Datatype_fixed");
        }
        inline app::Datatype_fixed* create() {
            return il2cpp::create_object<app::Datatype_fixed>(get_class());
        }
    } // namespace Datatype_fixed
} // namespace app::classes::types
