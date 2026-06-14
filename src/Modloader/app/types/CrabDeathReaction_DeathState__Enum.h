#pragma once
#include <Modloader/app/structs/CrabDeathReaction_DeathState__Enum.h>
#include <Modloader/app/structs/CrabDeathReaction_DeathState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrabDeathReaction_DeathState__Enum {
        inline app::CrabDeathReaction_DeathState__Enum__Class** type_info() {
            static app::CrabDeathReaction_DeathState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrabDeathReaction_DeathState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrabDeathReaction_DeathState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CrabDeathReaction_DeathState__Enum__Class>(type_info(), "", "CrabDeathReaction", "DeathState");
        }
        inline app::CrabDeathReaction_DeathState__Enum* create() {
            return il2cpp::create_object<app::CrabDeathReaction_DeathState__Enum>(get_class());
        }
    } // namespace CrabDeathReaction_DeathState__Enum
} // namespace app::classes::types
