#pragma once
#include <Modloader/app/structs/PressAnyButtonPrompt.h>
#include <Modloader/app/structs/PressAnyButtonPrompt__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PressAnyButtonPrompt {
        inline app::PressAnyButtonPrompt__Class** type_info() {
            static app::PressAnyButtonPrompt__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PressAnyButtonPrompt__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PressAnyButtonPrompt__Class* get_class() {
            return il2cpp::get_class<app::PressAnyButtonPrompt__Class>(type_info(), "", "PressAnyButtonPrompt");
        }
        inline app::PressAnyButtonPrompt* create() {
            return il2cpp::create_object<app::PressAnyButtonPrompt>(get_class());
        }
    } // namespace PressAnyButtonPrompt
} // namespace app::classes::types
