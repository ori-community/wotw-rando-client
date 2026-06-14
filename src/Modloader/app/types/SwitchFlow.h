#pragma once
#include <Modloader/app/structs/SwitchFlow.h>
#include <Modloader/app/structs/SwitchFlow__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwitchFlow {
        inline app::SwitchFlow__Class** type_info() {
            static app::SwitchFlow__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwitchFlow__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwitchFlow__Class* get_class() {
            return il2cpp::get_class<app::SwitchFlow__Class>(type_info(), "frameworks.Switch", "SwitchFlow");
        }
        inline app::SwitchFlow* create() {
            return il2cpp::create_object<app::SwitchFlow>(get_class());
        }
    } // namespace SwitchFlow
} // namespace app::classes::types
