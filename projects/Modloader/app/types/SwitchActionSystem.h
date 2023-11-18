#pragma once
#include <Modloader/app/structs/SwitchActionSystem.h>
#include <Modloader/app/structs/SwitchActionSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwitchActionSystem {
        inline app::SwitchActionSystem__Class** type_info() {
            static app::SwitchActionSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwitchActionSystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwitchActionSystem__Class* get_class() {
            return il2cpp::get_class<app::SwitchActionSystem__Class>(type_info(), "", "SwitchActionSystem");
        }
        inline app::SwitchActionSystem* create() {
            return il2cpp::create_object<app::SwitchActionSystem>(get_class());
        }
    } // namespace SwitchActionSystem
} // namespace app::classes::types
