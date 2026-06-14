#pragma once
#include <Modloader/app/structs/SeinCarry_CarryAnimations.h>
#include <Modloader/app/structs/SeinCarry_CarryAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinCarry_CarryAnimations {
        inline app::SeinCarry_CarryAnimations__Class** type_info() {
            static app::SeinCarry_CarryAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinCarry_CarryAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinCarry_CarryAnimations__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinCarry_CarryAnimations__Class>(type_info(), "", "SeinCarry", "CarryAnimations");
        }
        inline app::SeinCarry_CarryAnimations* create() {
            return il2cpp::create_object<app::SeinCarry_CarryAnimations>(get_class());
        }
    } // namespace SeinCarry_CarryAnimations
} // namespace app::classes::types
