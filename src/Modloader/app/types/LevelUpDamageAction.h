#pragma once
#include <Modloader/app/structs/LevelUpDamageAction.h>
#include <Modloader/app/structs/LevelUpDamageAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LevelUpDamageAction {
        inline app::LevelUpDamageAction__Class** type_info() {
            static app::LevelUpDamageAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LevelUpDamageAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LevelUpDamageAction__Class* get_class() {
            return il2cpp::get_class<app::LevelUpDamageAction__Class>(type_info(), "", "LevelUpDamageAction");
        }
        inline app::LevelUpDamageAction* create() {
            return il2cpp::create_object<app::LevelUpDamageAction>(get_class());
        }
    } // namespace LevelUpDamageAction
} // namespace app::classes::types
