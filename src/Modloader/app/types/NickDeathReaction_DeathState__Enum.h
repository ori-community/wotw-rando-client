#pragma once
#include <Modloader/app/structs/NickDeathReaction_DeathState__Enum.h>
#include <Modloader/app/structs/NickDeathReaction_DeathState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NickDeathReaction_DeathState__Enum {
        inline app::NickDeathReaction_DeathState__Enum__Class** type_info() {
            static app::NickDeathReaction_DeathState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NickDeathReaction_DeathState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NickDeathReaction_DeathState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::NickDeathReaction_DeathState__Enum__Class>(type_info(), "", "NickDeathReaction", "DeathState");
        }
        inline app::NickDeathReaction_DeathState__Enum* create() {
            return il2cpp::create_object<app::NickDeathReaction_DeathState__Enum>(get_class());
        }
    } // namespace NickDeathReaction_DeathState__Enum
} // namespace app::classes::types
