#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_tokenV1Compat {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_tokenV1Compat__Class** type_info;
        inline app::Datatype_tokenV1Compat__Class* get_class() {
            return il2cpp::get_class<app::Datatype_tokenV1Compat__Class>(type_info, "System.Xml.Schema", "Datatype_tokenV1Compat");
        }
        inline app::Datatype_tokenV1Compat* create() {
            return il2cpp::create_object<app::Datatype_tokenV1Compat>(get_class());
        }
    } // namespace Datatype_tokenV1Compat
} // namespace app::classes::types
