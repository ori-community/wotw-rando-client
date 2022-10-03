#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReportPlayerClientRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReportPlayerClientRequest__Class** type_info;
        inline app::ReportPlayerClientRequest__Class* get_class() {
            return il2cpp::get_class<app::ReportPlayerClientRequest__Class>(type_info, "PlayFab.ClientModels", "ReportPlayerClientRequest");
        }
        inline app::ReportPlayerClientRequest* create() {
            return il2cpp::create_object<app::ReportPlayerClientRequest>(get_class());
        }
    } // namespace ReportPlayerClientRequest
} // namespace app::classes::types
