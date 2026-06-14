#pragma once
#include <Modloader/app/structs/GetPlayerTagsResult.h>
#include <Modloader/app/structs/GetPlayerTagsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayerTagsResult {
        inline app::GetPlayerTagsResult__Class** type_info() {
            static app::GetPlayerTagsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayerTagsResult__Class**)(modloader::win::memory::resolve_rva(0x04777800));
            }
            return cache;
        }
        inline app::GetPlayerTagsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerTagsResult__Class>(type_info(), "PlayFab.ClientModels", "GetPlayerTagsResult");
        }
        inline app::GetPlayerTagsResult* create() {
            return il2cpp::create_object<app::GetPlayerTagsResult>(get_class());
        }
    } // namespace GetPlayerTagsResult
} // namespace app::classes::types
