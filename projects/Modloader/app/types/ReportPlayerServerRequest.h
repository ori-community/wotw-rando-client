#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReportPlayerServerRequest {
        inline app::ReportPlayerServerRequest__Class** type_info = (app::ReportPlayerServerRequest__Class**)(modloader::win::memory::resolve_rva(0x047664B0));
        inline app::ReportPlayerServerRequest__Class* get_class() {
            return il2cpp::get_class<app::ReportPlayerServerRequest__Class>(type_info, "PlayFab.ServerModels", "ReportPlayerServerRequest");
        }
        inline app::ReportPlayerServerRequest* create() {
            return il2cpp::create_object<app::ReportPlayerServerRequest>(get_class());
        }
    } // namespace ReportPlayerServerRequest
} // namespace app::classes::types
