#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_union {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_union__Class** type_info;
        inline app::Datatype_union__Class* get_class() {
            return il2cpp::get_class<app::Datatype_union__Class>(type_info, "System.Xml.Schema", "Datatype_union");
        }
        inline app::Datatype_union* create() {
            return il2cpp::create_object<app::Datatype_union>(get_class());
        }
    } // namespace Datatype_union
} // namespace app::classes::types
