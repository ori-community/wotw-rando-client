#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_int {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_int__Class** type_info;
        inline app::Datatype_int__Class* get_class() {
            return il2cpp::get_class<app::Datatype_int__Class>(type_info, "System.Xml.Schema", "Datatype_int");
        }
        inline app::Datatype_int* create() {
            return il2cpp::create_object<app::Datatype_int>(get_class());
        }
    } // namespace Datatype_int
} // namespace app::classes::types
