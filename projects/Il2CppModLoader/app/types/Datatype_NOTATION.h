#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_NOTATION {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_NOTATION__Class** type_info;
        inline app::Datatype_NOTATION__Class* get_class() {
            return il2cpp::get_class<app::Datatype_NOTATION__Class>(type_info, "System.Xml.Schema", "Datatype_NOTATION");
        }
        inline app::Datatype_NOTATION* create() {
            return il2cpp::create_object<app::Datatype_NOTATION>(get_class());
        }
    } // namespace Datatype_NOTATION
} // namespace app::classes::types
