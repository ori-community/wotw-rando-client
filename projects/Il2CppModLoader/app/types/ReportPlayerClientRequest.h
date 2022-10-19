#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReportPlayerClientRequest {
        inline app::ReportPlayerClientRequest__Class** type_info = (app::ReportPlayerClientRequest__Class**)(modloader::win::memory::resolve_rva(0x0474B6D0));
        inline app::ReportPlayerClientRequest__Class* get_class() {
            return il2cpp::get_class<app::ReportPlayerClientRequest__Class>(type_info, "PlayFab.ClientModels", "ReportPlayerClientRequest");
        }
        inline app::ReportPlayerClientRequest* create() {
            return il2cpp::create_object<app::ReportPlayerClientRequest>(get_class());
        }
    } // namespace ReportPlayerClientRequest
} // namespace app::classes::types
