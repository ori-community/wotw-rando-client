#pragma once
#include <Modloader/app/structs/GetTitleNewsResult.h>
#include <Modloader/app/structs/GetTitleNewsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetTitleNewsResult {
        inline app::GetTitleNewsResult__Class** type_info() {
            static app::GetTitleNewsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetTitleNewsResult__Class**)(modloader::win::memory::resolve_rva(0x0474F848));
            }
            return cache;
        }
        inline app::GetTitleNewsResult__Class* get_class() {
            return il2cpp::get_class<app::GetTitleNewsResult__Class>(type_info(), "PlayFab.ClientModels", "GetTitleNewsResult");
        }
        inline app::GetTitleNewsResult* create() {
            return il2cpp::create_object<app::GetTitleNewsResult>(get_class());
        }
    } // namespace GetTitleNewsResult
} // namespace app::classes::types
