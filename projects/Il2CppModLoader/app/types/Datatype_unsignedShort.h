#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_unsignedShort {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_unsignedShort__Class** type_info;
        inline app::Datatype_unsignedShort__Class* get_class() {
            return il2cpp::get_class<app::Datatype_unsignedShort__Class>(type_info, "System.Xml.Schema", "Datatype_unsignedShort");
        }
        inline app::Datatype_unsignedShort* create() {
            return il2cpp::create_object<app::Datatype_unsignedShort>(get_class());
        }
    } // namespace Datatype_unsignedShort
} // namespace app::classes::types
