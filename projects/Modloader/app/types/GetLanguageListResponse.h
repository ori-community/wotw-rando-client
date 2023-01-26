#pragma once
#include <Modloader/app/structs/GetLanguageListResponse.h>
#include <Modloader/app/structs/GetLanguageListResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetLanguageListResponse {
        inline app::GetLanguageListResponse__Class** type_info() {
            static app::GetLanguageListResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetLanguageListResponse__Class**)(modloader::win::memory::resolve_rva(0x047939E0));
            }
            return cache;
        }
        inline app::GetLanguageListResponse__Class* get_class() {
            return il2cpp::get_class<app::GetLanguageListResponse__Class>(type_info(), "PlayFab.LocalizationModels", "GetLanguageListResponse");
        }
        inline app::GetLanguageListResponse* create() {
            return il2cpp::create_object<app::GetLanguageListResponse>(get_class());
        }
    } // namespace GetLanguageListResponse
} // namespace app::classes::types
