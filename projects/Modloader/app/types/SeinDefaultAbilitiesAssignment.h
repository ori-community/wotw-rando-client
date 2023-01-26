#pragma once
#include <Modloader/app/structs/SeinDefaultAbilitiesAssignment.h>
#include <Modloader/app/structs/SeinDefaultAbilitiesAssignment__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinDefaultAbilitiesAssignment {
        inline app::SeinDefaultAbilitiesAssignment__Class** type_info() {
            static app::SeinDefaultAbilitiesAssignment__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinDefaultAbilitiesAssignment__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinDefaultAbilitiesAssignment__Class* get_class() {
            return il2cpp::get_class<app::SeinDefaultAbilitiesAssignment__Class>(type_info(), "", "SeinDefaultAbilitiesAssignment");
        }
        inline app::SeinDefaultAbilitiesAssignment* create() {
            return il2cpp::create_object<app::SeinDefaultAbilitiesAssignment>(get_class());
        }
    } // namespace SeinDefaultAbilitiesAssignment
} // namespace app::classes::types
