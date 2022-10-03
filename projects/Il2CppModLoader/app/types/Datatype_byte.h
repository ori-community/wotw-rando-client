#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_byte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_byte__Class** type_info;
        inline app::Datatype_byte__Class* get_class() {
            return il2cpp::get_class<app::Datatype_byte__Class>(type_info, "System.Xml.Schema", "Datatype_byte");
        }
        inline app::Datatype_byte* create() {
            return il2cpp::create_object<app::Datatype_byte>(get_class());
        }
    } // namespace Datatype_byte
} // namespace app::classes::types
