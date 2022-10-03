#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_dateTime {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_dateTime__Class** type_info;
        inline app::Datatype_dateTime__Class* get_class() {
            return il2cpp::get_class<app::Datatype_dateTime__Class>(type_info, "System.Xml.Schema", "Datatype_dateTime");
        }
        inline app::Datatype_dateTime* create() {
            return il2cpp::create_object<app::Datatype_dateTime>(get_class());
        }
    } // namespace Datatype_dateTime
} // namespace app::classes::types
