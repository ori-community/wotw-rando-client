#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_anySimpleType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_anySimpleType__Class** type_info;
        inline app::Datatype_anySimpleType__Class* get_class() {
            return il2cpp::get_class<app::Datatype_anySimpleType__Class>(type_info, "System.Xml.Schema", "Datatype_anySimpleType");
        }
        inline app::Datatype_anySimpleType* create() {
            return il2cpp::create_object<app::Datatype_anySimpleType>(get_class());
        }
    } // namespace Datatype_anySimpleType
} // namespace app::classes::types
