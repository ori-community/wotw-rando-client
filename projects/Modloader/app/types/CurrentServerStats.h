#pragma once
#include <Modloader/app/structs/CurrentServerStats.h>
#include <Modloader/app/structs/CurrentServerStats__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CurrentServerStats {
        inline app::CurrentServerStats__Class** type_info() {
            static app::CurrentServerStats__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CurrentServerStats__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CurrentServerStats__Class* get_class() {
            return il2cpp::get_class<app::CurrentServerStats__Class>(type_info(), "PlayFab.MultiplayerModels", "CurrentServerStats");
        }
        inline app::CurrentServerStats* create() {
            return il2cpp::create_object<app::CurrentServerStats>(get_class());
        }
    } // namespace CurrentServerStats
} // namespace app::classes::types
