#pragma once
#include <Modloader/app/structs/GameMapObjectiveIcons.h>
#include <Modloader/app/structs/GameMapObjectiveIcons__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameMapObjectiveIcons {
        inline app::GameMapObjectiveIcons__Class** type_info() {
            static app::GameMapObjectiveIcons__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameMapObjectiveIcons__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameMapObjectiveIcons__Class* get_class() {
            return il2cpp::get_class<app::GameMapObjectiveIcons__Class>(type_info(), "", "GameMapObjectiveIcons");
        }
        inline app::GameMapObjectiveIcons* create() {
            return il2cpp::create_object<app::GameMapObjectiveIcons>(get_class());
        }
    } // namespace GameMapObjectiveIcons
} // namespace app::classes::types
