#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_dateTimeTimeZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_dateTimeTimeZone__Class** type_info;
        inline app::Datatype_dateTimeTimeZone__Class* get_class() {
            return il2cpp::get_class<app::Datatype_dateTimeTimeZone__Class>(type_info, "System.Xml.Schema", "Datatype_dateTimeTimeZone");
        }
        inline app::Datatype_dateTimeTimeZone* create() {
            return il2cpp::create_object<app::Datatype_dateTimeTimeZone>(get_class());
        }
    } // namespace Datatype_dateTimeTimeZone
} // namespace app::classes::types
