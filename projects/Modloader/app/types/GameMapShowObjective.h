#pragma once
#include <Modloader/app/structs/GameMapShowObjective.h>
#include <Modloader/app/structs/GameMapShowObjective__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameMapShowObjective {
        inline app::GameMapShowObjective__Class** type_info() {
            static app::GameMapShowObjective__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameMapShowObjective__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameMapShowObjective__Class* get_class() {
            return il2cpp::get_class<app::GameMapShowObjective__Class>(type_info(), "", "GameMapShowObjective");
        }
        inline app::GameMapShowObjective* create() {
            return il2cpp::create_object<app::GameMapShowObjective>(get_class());
        }
    } // namespace GameMapShowObjective
} // namespace app::classes::types
