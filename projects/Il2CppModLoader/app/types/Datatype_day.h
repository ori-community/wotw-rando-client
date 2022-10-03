#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_day {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_day__Class** type_info;
        inline app::Datatype_day__Class* get_class() {
            return il2cpp::get_class<app::Datatype_day__Class>(type_info, "System.Xml.Schema", "Datatype_day");
        }
        inline app::Datatype_day* create() {
            return il2cpp::create_object<app::Datatype_day>(get_class());
        }
    } // namespace Datatype_day
} // namespace app::classes::types
