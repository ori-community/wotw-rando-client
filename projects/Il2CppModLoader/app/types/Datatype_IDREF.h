#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_IDREF {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_IDREF__Class** type_info;
        inline app::Datatype_IDREF__Class* get_class() {
            return il2cpp::get_class<app::Datatype_IDREF__Class>(type_info, "System.Xml.Schema", "Datatype_IDREF");
        }
        inline app::Datatype_IDREF* create() {
            return il2cpp::create_object<app::Datatype_IDREF>(get_class());
        }
    } // namespace Datatype_IDREF
} // namespace app::classes::types
