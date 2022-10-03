#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_date {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_date__Class** type_info;
        inline app::Datatype_date__Class* get_class() {
            return il2cpp::get_class<app::Datatype_date__Class>(type_info, "System.Xml.Schema", "Datatype_date");
        }
        inline app::Datatype_date* create() {
            return il2cpp::create_object<app::Datatype_date>(get_class());
        }
    } // namespace Datatype_date
} // namespace app::classes::types
