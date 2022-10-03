#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReportLocationAction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReportLocationAction__Class** type_info;
        inline app::ReportLocationAction__Class* get_class() {
            return il2cpp::get_class<app::ReportLocationAction__Class>(type_info, "", "ReportLocationAction");
        }
        inline app::ReportLocationAction* create() {
            return il2cpp::create_object<app::ReportLocationAction>(get_class());
        }
    } // namespace ReportLocationAction
} // namespace app::classes::types
