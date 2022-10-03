#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_yearMonthDuration {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_yearMonthDuration__Class** type_info;
        inline app::Datatype_yearMonthDuration__Class* get_class() {
            return il2cpp::get_class<app::Datatype_yearMonthDuration__Class>(type_info, "System.Xml.Schema", "Datatype_yearMonthDuration");
        }
        inline app::Datatype_yearMonthDuration* create() {
            return il2cpp::create_object<app::Datatype_yearMonthDuration>(get_class());
        }
    } // namespace Datatype_yearMonthDuration
} // namespace app::classes::types
