#pragma once
#include <Modloader/app/structs/MatchmakeResult.h>
#include <Modloader/app/structs/MatchmakeResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakeResult {
        inline app::MatchmakeResult__Class** type_info() {
            static app::MatchmakeResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MatchmakeResult__Class**)(modloader::win::memory::resolve_rva(0x047150E8));
            }
            return cache;
        }
        inline app::MatchmakeResult__Class* get_class() {
            return il2cpp::get_class<app::MatchmakeResult__Class>(type_info(), "PlayFab.ClientModels", "MatchmakeResult");
        }
        inline app::MatchmakeResult* create() {
            return il2cpp::create_object<app::MatchmakeResult>(get_class());
        }
    } // namespace MatchmakeResult
} // namespace app::classes::types
