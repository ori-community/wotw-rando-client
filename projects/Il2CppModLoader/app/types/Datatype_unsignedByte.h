#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_unsignedByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_unsignedByte__Class** type_info;
        inline app::Datatype_unsignedByte__Class* get_class() {
            return il2cpp::get_class<app::Datatype_unsignedByte__Class>(type_info, "System.Xml.Schema", "Datatype_unsignedByte");
        }
        inline app::Datatype_unsignedByte* create() {
            return il2cpp::create_object<app::Datatype_unsignedByte>(get_class());
        }
    } // namespace Datatype_unsignedByte
} // namespace app::classes::types
