#pragma once
#include <Modloader/app/structs/GetUserBansResult.h>
#include <Modloader/app/structs/GetUserBansResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetUserBansResult {
        inline app::GetUserBansResult__Class** type_info() {
            static app::GetUserBansResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetUserBansResult__Class**)(modloader::win::memory::resolve_rva(0x047201F8));
            }
            return cache;
        }
        inline app::GetUserBansResult__Class* get_class() {
            return il2cpp::get_class<app::GetUserBansResult__Class>(type_info(), "PlayFab.ServerModels", "GetUserBansResult");
        }
        inline app::GetUserBansResult* create() {
            return il2cpp::create_object<app::GetUserBansResult>(get_class());
        }
    } // namespace GetUserBansResult
} // namespace app::classes::types
