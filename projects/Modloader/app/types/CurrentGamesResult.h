#pragma once
#include <Modloader/app/structs/CurrentGamesResult.h>
#include <Modloader/app/structs/CurrentGamesResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CurrentGamesResult {
        inline app::CurrentGamesResult__Class** type_info() {
            static app::CurrentGamesResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CurrentGamesResult__Class**)(modloader::win::memory::resolve_rva(0x04735AC8));
            }
            return cache;
        }
        inline app::CurrentGamesResult__Class* get_class() {
            return il2cpp::get_class<app::CurrentGamesResult__Class>(type_info(), "PlayFab.ClientModels", "CurrentGamesResult");
        }
        inline app::CurrentGamesResult* create() {
            return il2cpp::create_object<app::CurrentGamesResult>(get_class());
        }
    } // namespace CurrentGamesResult
} // namespace app::classes::types
