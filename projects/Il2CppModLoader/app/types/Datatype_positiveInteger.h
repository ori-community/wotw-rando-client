#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_positiveInteger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_positiveInteger__Class** type_info;
        inline app::Datatype_positiveInteger__Class* get_class() {
            return il2cpp::get_class<app::Datatype_positiveInteger__Class>(type_info, "System.Xml.Schema", "Datatype_positiveInteger");
        }
        inline app::Datatype_positiveInteger* create() {
            return il2cpp::create_object<app::Datatype_positiveInteger>(get_class());
        }
    } // namespace Datatype_positiveInteger
} // namespace app::classes::types
