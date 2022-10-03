#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_ID {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_ID__Class** type_info;
        inline app::Datatype_ID__Class* get_class() {
            return il2cpp::get_class<app::Datatype_ID__Class>(type_info, "System.Xml.Schema", "Datatype_ID");
        }
        inline app::Datatype_ID* create() {
            return il2cpp::create_object<app::Datatype_ID>(get_class());
        }
    } // namespace Datatype_ID
} // namespace app::classes::types
