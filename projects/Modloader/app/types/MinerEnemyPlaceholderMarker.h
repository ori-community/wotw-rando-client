#pragma once
#include <Modloader/app/structs/MinerEnemyPlaceholderMarker.h>
#include <Modloader/app/structs/MinerEnemyPlaceholderMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerEnemyPlaceholderMarker {
        inline app::MinerEnemyPlaceholderMarker__Class** type_info() {
            static app::MinerEnemyPlaceholderMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerEnemyPlaceholderMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerEnemyPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::MinerEnemyPlaceholderMarker__Class>(type_info(), "", "MinerEnemyPlaceholderMarker");
        }
        inline app::MinerEnemyPlaceholderMarker* create() {
            return il2cpp::create_object<app::MinerEnemyPlaceholderMarker>(get_class());
        }
    } // namespace MinerEnemyPlaceholderMarker
} // namespace app::classes::types
