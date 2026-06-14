#pragma once
#include <Modloader/app/structs/GetMatchResult.h>
#include <Modloader/app/structs/GetMatchResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetMatchResult {
        inline app::GetMatchResult__Class** type_info() {
            static app::GetMatchResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetMatchResult__Class**)(modloader::win::memory::resolve_rva(0x0476F7E8));
            }
            return cache;
        }
        inline app::GetMatchResult__Class* get_class() {
            return il2cpp::get_class<app::GetMatchResult__Class>(type_info(), "PlayFab.MultiplayerModels", "GetMatchResult");
        }
        inline app::GetMatchResult* create() {
            return il2cpp::create_object<app::GetMatchResult>(get_class());
        }
    } // namespace GetMatchResult
} // namespace app::classes::types
