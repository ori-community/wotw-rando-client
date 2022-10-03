#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_timeTimeZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_timeTimeZone__Class** type_info;
        inline app::Datatype_timeTimeZone__Class* get_class() {
            return il2cpp::get_class<app::Datatype_timeTimeZone__Class>(type_info, "System.Xml.Schema", "Datatype_timeTimeZone");
        }
        inline app::Datatype_timeTimeZone* create() {
            return il2cpp::create_object<app::Datatype_timeTimeZone>(get_class());
        }
    } // namespace Datatype_timeTimeZone
} // namespace app::classes::types
