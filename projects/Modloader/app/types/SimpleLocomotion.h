#pragma once
#include <Modloader/app/structs/SimpleLocomotion.h>
#include <Modloader/app/structs/SimpleLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleLocomotion {
        inline app::SimpleLocomotion__Class** type_info() {
            static app::SimpleLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleLocomotion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleLocomotion__Class* get_class() {
            return il2cpp::get_class<app::SimpleLocomotion__Class>(type_info(), "RootMotion.Demos", "SimpleLocomotion");
        }
        inline app::SimpleLocomotion* create() {
            return il2cpp::create_object<app::SimpleLocomotion>(get_class());
        }
    } // namespace SimpleLocomotion
} // namespace app::classes::types
