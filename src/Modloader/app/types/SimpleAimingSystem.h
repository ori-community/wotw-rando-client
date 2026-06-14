#pragma once
#include <Modloader/app/structs/SimpleAimingSystem.h>
#include <Modloader/app/structs/SimpleAimingSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleAimingSystem {
        inline app::SimpleAimingSystem__Class** type_info() {
            static app::SimpleAimingSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleAimingSystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleAimingSystem__Class* get_class() {
            return il2cpp::get_class<app::SimpleAimingSystem__Class>(type_info(), "RootMotion.Demos", "SimpleAimingSystem");
        }
        inline app::SimpleAimingSystem* create() {
            return il2cpp::create_object<app::SimpleAimingSystem>(get_class());
        }
    } // namespace SimpleAimingSystem
} // namespace app::classes::types
