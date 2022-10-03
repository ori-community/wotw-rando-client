#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_unsignedInt {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_unsignedInt__Class** type_info;
        inline app::Datatype_unsignedInt__Class* get_class() {
            return il2cpp::get_class<app::Datatype_unsignedInt__Class>(type_info, "System.Xml.Schema", "Datatype_unsignedInt");
        }
        inline app::Datatype_unsignedInt* create() {
            return il2cpp::create_object<app::Datatype_unsignedInt>(get_class());
        }
    } // namespace Datatype_unsignedInt
} // namespace app::classes::types
