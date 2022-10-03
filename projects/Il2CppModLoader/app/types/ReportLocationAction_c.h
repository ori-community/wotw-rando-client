#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReportLocationAction_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReportLocationAction_c__Class** type_info;
        inline app::ReportLocationAction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ReportLocationAction_c__Class>(type_info, "", "ReportLocationAction", "<>c");
        }
        inline app::ReportLocationAction_c* create() {
            return il2cpp::create_object<app::ReportLocationAction_c>(get_class());
        }
    } // namespace ReportLocationAction_c
} // namespace app::classes::types
