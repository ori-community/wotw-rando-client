#pragma once
#include <Modloader/app/structs/ActivateAndHold.h>
#include <Modloader/app/structs/ActivateAndHold__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivateAndHold {
        inline app::ActivateAndHold__Class** type_info() {
            static app::ActivateAndHold__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActivateAndHold__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActivateAndHold__Class* get_class() {
            return il2cpp::get_class<app::ActivateAndHold__Class>(type_info(), "", "ActivateAndHold");
        }
        inline app::ActivateAndHold* create() {
            return il2cpp::create_object<app::ActivateAndHold>(get_class());
        }
    } // namespace ActivateAndHold
} // namespace app::classes::types
