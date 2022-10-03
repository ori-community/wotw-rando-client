#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_month {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_month__Class** type_info;
        inline app::Datatype_month__Class* get_class() {
            return il2cpp::get_class<app::Datatype_month__Class>(type_info, "System.Xml.Schema", "Datatype_month");
        }
        inline app::Datatype_month* create() {
            return il2cpp::create_object<app::Datatype_month>(get_class());
        }
    } // namespace Datatype_month
} // namespace app::classes::types
