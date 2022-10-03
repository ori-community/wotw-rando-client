#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReportPlayerServerResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReportPlayerServerResult__Class** type_info;
        inline app::ReportPlayerServerResult__Class* get_class() {
            return il2cpp::get_class<app::ReportPlayerServerResult__Class>(type_info, "PlayFab.ServerModels", "ReportPlayerServerResult");
        }
        inline app::ReportPlayerServerResult* create() {
            return il2cpp::create_object<app::ReportPlayerServerResult>(get_class());
        }
    } // namespace ReportPlayerServerResult
} // namespace app::classes::types
