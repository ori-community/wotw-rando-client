#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_anyURI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_anyURI__Class** type_info;
        inline app::Datatype_anyURI__Class* get_class() {
            return il2cpp::get_class<app::Datatype_anyURI__Class>(type_info, "System.Xml.Schema", "Datatype_anyURI");
        }
        inline app::Datatype_anyURI* create() {
            return il2cpp::create_object<app::Datatype_anyURI>(get_class());
        }
    } // namespace Datatype_anyURI
} // namespace app::classes::types
