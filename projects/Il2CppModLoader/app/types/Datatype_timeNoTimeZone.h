#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_timeNoTimeZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_timeNoTimeZone__Class** type_info;
        inline app::Datatype_timeNoTimeZone__Class* get_class() {
            return il2cpp::get_class<app::Datatype_timeNoTimeZone__Class>(type_info, "System.Xml.Schema", "Datatype_timeNoTimeZone");
        }
        inline app::Datatype_timeNoTimeZone* create() {
            return il2cpp::create_object<app::Datatype_timeNoTimeZone>(get_class());
        }
    } // namespace Datatype_timeNoTimeZone
} // namespace app::classes::types
