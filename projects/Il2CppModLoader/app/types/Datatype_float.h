#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_float {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_float__Class** type_info;
        inline app::Datatype_float__Class* get_class() {
            return il2cpp::get_class<app::Datatype_float__Class>(type_info, "System.Xml.Schema", "Datatype_float");
        }
        inline app::Datatype_float* create() {
            return il2cpp::create_object<app::Datatype_float>(get_class());
        }
    } // namespace Datatype_float
} // namespace app::classes::types
