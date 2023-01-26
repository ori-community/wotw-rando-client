#pragma once
#include <Modloader/app/structs/PendulumExample.h>
#include <Modloader/app/structs/PendulumExample__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PendulumExample {
        inline app::PendulumExample__Class** type_info() {
            static app::PendulumExample__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PendulumExample__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PendulumExample__Class* get_class() {
            return il2cpp::get_class<app::PendulumExample__Class>(type_info(), "RootMotion.Demos", "PendulumExample");
        }
        inline app::PendulumExample* create() {
            return il2cpp::create_object<app::PendulumExample>(get_class());
        }
    } // namespace PendulumExample
} // namespace app::classes::types
