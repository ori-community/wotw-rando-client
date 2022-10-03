#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_hexBinary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_hexBinary__Class** type_info;
        inline app::Datatype_hexBinary__Class* get_class() {
            return il2cpp::get_class<app::Datatype_hexBinary__Class>(type_info, "System.Xml.Schema", "Datatype_hexBinary");
        }
        inline app::Datatype_hexBinary* create() {
            return il2cpp::create_object<app::Datatype_hexBinary>(get_class());
        }
    } // namespace Datatype_hexBinary
} // namespace app::classes::types
