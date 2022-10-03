#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrabDeathReaction_DeathState__Enum {
        namespace {
            app::CrabDeathReaction_DeathState__Enum__Class* type_info_ref = nullptr;
        }
        app::CrabDeathReaction_DeathState__Enum__Class** type_info = &type_info_ref;
        inline app::CrabDeathReaction_DeathState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CrabDeathReaction_DeathState__Enum__Class>(type_info, "", "CrabDeathReaction", "DeathState");
        }
        inline app::CrabDeathReaction_DeathState__Enum* create() {
            return il2cpp::create_object<app::CrabDeathReaction_DeathState__Enum>(get_class());
        }
    } // namespace CrabDeathReaction_DeathState__Enum
} // namespace app::classes::types
