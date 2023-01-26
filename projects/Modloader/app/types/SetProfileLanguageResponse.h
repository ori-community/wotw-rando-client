#pragma once
#include <Modloader/app/structs/SetProfileLanguageResponse.h>
#include <Modloader/app/structs/SetProfileLanguageResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetProfileLanguageResponse {
        inline app::SetProfileLanguageResponse__Class** type_info() {
            static app::SetProfileLanguageResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetProfileLanguageResponse__Class**)(modloader::win::memory::resolve_rva(0x0471BDA0));
            }
            return cache;
        }
        inline app::SetProfileLanguageResponse__Class* get_class() {
            return il2cpp::get_class<app::SetProfileLanguageResponse__Class>(type_info(), "PlayFab.ProfilesModels", "SetProfileLanguageResponse");
        }
        inline app::SetProfileLanguageResponse* create() {
            return il2cpp::create_object<app::SetProfileLanguageResponse>(get_class());
        }
    } // namespace SetProfileLanguageResponse
} // namespace app::classes::types
