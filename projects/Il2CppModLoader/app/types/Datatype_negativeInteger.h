#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_negativeInteger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_negativeInteger__Class** type_info;
        inline app::Datatype_negativeInteger__Class* get_class() {
            return il2cpp::get_class<app::Datatype_negativeInteger__Class>(type_info, "System.Xml.Schema", "Datatype_negativeInteger");
        }
        inline app::Datatype_negativeInteger* create() {
            return il2cpp::create_object<app::Datatype_negativeInteger>(get_class());
        }
    } // namespace Datatype_negativeInteger
} // namespace app::classes::types
