#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_time {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_time__Class** type_info;
        inline app::Datatype_time__Class* get_class() {
            return il2cpp::get_class<app::Datatype_time__Class>(type_info, "System.Xml.Schema", "Datatype_time");
        }
        inline app::Datatype_time* create() {
            return il2cpp::create_object<app::Datatype_time>(get_class());
        }
    } // namespace Datatype_time
} // namespace app::classes::types
