#pragma once
#include <Modloader/app/structs/MeleeWeaponHammer_DisolveState__Enum.h>
#include <Modloader/app/structs/MeleeWeaponHammer_DisolveState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeWeaponHammer_DisolveState__Enum {
        inline app::MeleeWeaponHammer_DisolveState__Enum__Class** type_info() {
            static app::MeleeWeaponHammer_DisolveState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeWeaponHammer_DisolveState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeWeaponHammer_DisolveState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeWeaponHammer_DisolveState__Enum__Class>(type_info(), "", "MeleeWeaponHammer", "DisolveState");
        }
        inline app::MeleeWeaponHammer_DisolveState__Enum* create() {
            return il2cpp::create_object<app::MeleeWeaponHammer_DisolveState__Enum>(get_class());
        }
    } // namespace MeleeWeaponHammer_DisolveState__Enum
} // namespace app::classes::types
