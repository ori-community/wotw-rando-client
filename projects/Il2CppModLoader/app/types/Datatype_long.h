#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_long {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_long__Class** type_info;
        inline app::Datatype_long__Class* get_class() {
            return il2cpp::get_class<app::Datatype_long__Class>(type_info, "System.Xml.Schema", "Datatype_long");
        }
        inline app::Datatype_long* create() {
            return il2cpp::create_object<app::Datatype_long>(get_class());
        }
    } // namespace Datatype_long
} // namespace app::classes::types
