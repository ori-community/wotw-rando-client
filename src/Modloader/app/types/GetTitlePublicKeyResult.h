#pragma once
#include <Modloader/app/structs/GetTitlePublicKeyResult.h>
#include <Modloader/app/structs/GetTitlePublicKeyResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetTitlePublicKeyResult {
        inline app::GetTitlePublicKeyResult__Class** type_info() {
            static app::GetTitlePublicKeyResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetTitlePublicKeyResult__Class**)(modloader::win::memory::resolve_rva(0x04789628));
            }
            return cache;
        }
        inline app::GetTitlePublicKeyResult__Class* get_class() {
            return il2cpp::get_class<app::GetTitlePublicKeyResult__Class>(type_info(), "PlayFab.ClientModels", "GetTitlePublicKeyResult");
        }
        inline app::GetTitlePublicKeyResult* create() {
            return il2cpp::create_object<app::GetTitlePublicKeyResult>(get_class());
        }
    } // namespace GetTitlePublicKeyResult
} // namespace app::classes::types
