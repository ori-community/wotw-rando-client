#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_char {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_char__Class** type_info;
        inline app::Datatype_char__Class* get_class() {
            return il2cpp::get_class<app::Datatype_char__Class>(type_info, "System.Xml.Schema", "Datatype_char");
        }
        inline app::Datatype_char* create() {
            return il2cpp::create_object<app::Datatype_char>(get_class());
        }
    } // namespace Datatype_char
} // namespace app::classes::types
