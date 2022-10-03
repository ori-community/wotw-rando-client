#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_ENTITY {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_ENTITY__Class** type_info;
        inline app::Datatype_ENTITY__Class* get_class() {
            return il2cpp::get_class<app::Datatype_ENTITY__Class>(type_info, "System.Xml.Schema", "Datatype_ENTITY");
        }
        inline app::Datatype_ENTITY* create() {
            return il2cpp::create_object<app::Datatype_ENTITY>(get_class());
        }
    } // namespace Datatype_ENTITY
} // namespace app::classes::types
