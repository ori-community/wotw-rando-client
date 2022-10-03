#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_dateTimeNoTimeZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_dateTimeNoTimeZone__Class** type_info;
        inline app::Datatype_dateTimeNoTimeZone__Class* get_class() {
            return il2cpp::get_class<app::Datatype_dateTimeNoTimeZone__Class>(type_info, "System.Xml.Schema", "Datatype_dateTimeNoTimeZone");
        }
        inline app::Datatype_dateTimeNoTimeZone* create() {
            return il2cpp::create_object<app::Datatype_dateTimeNoTimeZone>(get_class());
        }
    } // namespace Datatype_dateTimeNoTimeZone
} // namespace app::classes::types
