#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_string {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_string__Class** type_info;
        inline app::Datatype_string__Class* get_class() {
            return il2cpp::get_class<app::Datatype_string__Class>(type_info, "System.Xml.Schema", "Datatype_string");
        }
        inline app::Datatype_string* create() {
            return il2cpp::create_object<app::Datatype_string>(get_class());
        }
    } // namespace Datatype_string
} // namespace app::classes::types
