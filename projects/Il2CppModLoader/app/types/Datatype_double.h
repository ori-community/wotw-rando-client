#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_double {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_double__Class** type_info;
        inline app::Datatype_double__Class* get_class() {
            return il2cpp::get_class<app::Datatype_double__Class>(type_info, "System.Xml.Schema", "Datatype_double");
        }
        inline app::Datatype_double* create() {
            return il2cpp::create_object<app::Datatype_double>(get_class());
        }
    } // namespace Datatype_double
} // namespace app::classes::types
