#pragma once
#include <Modloader/app/structs/GameStateCondition.h>
#include <Modloader/app/structs/GameStateCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameStateCondition {
        inline app::GameStateCondition__Class** type_info() {
            static app::GameStateCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameStateCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameStateCondition__Class* get_class() {
            return il2cpp::get_class<app::GameStateCondition__Class>(type_info(), "", "GameStateCondition");
        }
        inline app::GameStateCondition* create() {
            return il2cpp::create_object<app::GameStateCondition>(get_class());
        }
    } // namespace GameStateCondition
} // namespace app::classes::types
