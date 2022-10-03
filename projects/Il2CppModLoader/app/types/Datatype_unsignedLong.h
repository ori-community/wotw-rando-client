#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_unsignedLong {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_unsignedLong__Class** type_info;
        inline app::Datatype_unsignedLong__Class* get_class() {
            return il2cpp::get_class<app::Datatype_unsignedLong__Class>(type_info, "System.Xml.Schema", "Datatype_unsignedLong");
        }
        inline app::Datatype_unsignedLong* create() {
            return il2cpp::create_object<app::Datatype_unsignedLong>(get_class());
        }
    } // namespace Datatype_unsignedLong
} // namespace app::classes::types
