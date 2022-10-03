#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_token {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_token__Class** type_info;
        inline app::Datatype_token__Class* get_class() {
            return il2cpp::get_class<app::Datatype_token__Class>(type_info, "System.Xml.Schema", "Datatype_token");
        }
        inline app::Datatype_token* create() {
            return il2cpp::create_object<app::Datatype_token>(get_class());
        }
    } // namespace Datatype_token
} // namespace app::classes::types
