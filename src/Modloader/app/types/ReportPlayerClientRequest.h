#pragma once
#include <Modloader/app/structs/ReportPlayerClientRequest.h>
#include <Modloader/app/structs/ReportPlayerClientRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReportPlayerClientRequest {
        inline app::ReportPlayerClientRequest__Class** type_info() {
            static app::ReportPlayerClientRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReportPlayerClientRequest__Class**)(modloader::win::memory::resolve_rva(0x0474B6D0));
            }
            return cache;
        }
        inline app::ReportPlayerClientRequest__Class* get_class() {
            return il2cpp::get_class<app::ReportPlayerClientRequest__Class>(type_info(), "PlayFab.ClientModels", "ReportPlayerClientRequest");
        }
        inline app::ReportPlayerClientRequest* create() {
            return il2cpp::create_object<app::ReportPlayerClientRequest>(get_class());
        }
    } // namespace ReportPlayerClientRequest
} // namespace app::classes::types
