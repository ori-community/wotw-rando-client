#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_short {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_short__Class** type_info;
        inline app::Datatype_short__Class* get_class() {
            return il2cpp::get_class<app::Datatype_short__Class>(type_info, "System.Xml.Schema", "Datatype_short");
        }
        inline app::Datatype_short* create() {
            return il2cpp::create_object<app::Datatype_short>(get_class());
        }
    } // namespace Datatype_short
} // namespace app::classes::types
