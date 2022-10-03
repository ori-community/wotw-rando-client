#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReportPlayerServerRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReportPlayerServerRequest__Class** type_info;
        inline app::ReportPlayerServerRequest__Class* get_class() {
            return il2cpp::get_class<app::ReportPlayerServerRequest__Class>(type_info, "PlayFab.ServerModels", "ReportPlayerServerRequest");
        }
        inline app::ReportPlayerServerRequest* create() {
            return il2cpp::create_object<app::ReportPlayerServerRequest>(get_class());
        }
    } // namespace ReportPlayerServerRequest
} // namespace app::classes::types
