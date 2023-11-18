#pragma once
#include <Modloader/app/structs/EnemyPlaceholderMarker.h>
#include <Modloader/app/structs/EnemyPlaceholderMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyPlaceholderMarker {
        inline app::EnemyPlaceholderMarker__Class** type_info() {
            static app::EnemyPlaceholderMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnemyPlaceholderMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnemyPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::EnemyPlaceholderMarker__Class>(type_info(), "", "EnemyPlaceholderMarker");
        }
        inline app::EnemyPlaceholderMarker* create() {
            return il2cpp::create_object<app::EnemyPlaceholderMarker>(get_class());
        }
    } // namespace EnemyPlaceholderMarker
} // namespace app::classes::types
