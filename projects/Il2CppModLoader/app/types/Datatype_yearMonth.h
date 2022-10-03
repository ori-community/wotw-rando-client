#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_yearMonth {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_yearMonth__Class** type_info;
        inline app::Datatype_yearMonth__Class* get_class() {
            return il2cpp::get_class<app::Datatype_yearMonth__Class>(type_info, "System.Xml.Schema", "Datatype_yearMonth");
        }
        inline app::Datatype_yearMonth* create() {
            return il2cpp::create_object<app::Datatype_yearMonth>(get_class());
        }
    } // namespace Datatype_yearMonth
} // namespace app::classes::types
