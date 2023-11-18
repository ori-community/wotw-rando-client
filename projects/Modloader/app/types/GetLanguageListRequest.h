#pragma once
#include <Modloader/app/structs/GetLanguageListRequest.h>
#include <Modloader/app/structs/GetLanguageListRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetLanguageListRequest {
        inline app::GetLanguageListRequest__Class** type_info() {
            static app::GetLanguageListRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetLanguageListRequest__Class**)(modloader::win::memory::resolve_rva(0x047381A0));
            }
            return cache;
        }
        inline app::GetLanguageListRequest__Class* get_class() {
            return il2cpp::get_class<app::GetLanguageListRequest__Class>(type_info(), "PlayFab.LocalizationModels", "GetLanguageListRequest");
        }
        inline app::GetLanguageListRequest* create() {
            return il2cpp::create_object<app::GetLanguageListRequest>(get_class());
        }
    } // namespace GetLanguageListRequest
} // namespace app::classes::types
