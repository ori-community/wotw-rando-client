#pragma once
#include <Modloader/app/structs/ReportPlayerServerRequest.h>
#include <Modloader/app/structs/ReportPlayerServerRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReportPlayerServerRequest {
        inline app::ReportPlayerServerRequest__Class** type_info() {
            static app::ReportPlayerServerRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReportPlayerServerRequest__Class**)(modloader::win::memory::resolve_rva(0x047664B0));
            }
            return cache;
        }
        inline app::ReportPlayerServerRequest__Class* get_class() {
            return il2cpp::get_class<app::ReportPlayerServerRequest__Class>(type_info(), "PlayFab.ServerModels", "ReportPlayerServerRequest");
        }
        inline app::ReportPlayerServerRequest* create() {
            return il2cpp::create_object<app::ReportPlayerServerRequest>(get_class());
        }
    } // namespace ReportPlayerServerRequest
} // namespace app::classes::types
