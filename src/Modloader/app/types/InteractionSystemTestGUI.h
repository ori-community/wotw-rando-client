#pragma once
#include <Modloader/app/structs/InteractionSystemTestGUI.h>
#include <Modloader/app/structs/InteractionSystemTestGUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionSystemTestGUI {
        inline app::InteractionSystemTestGUI__Class** type_info() {
            static app::InteractionSystemTestGUI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionSystemTestGUI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionSystemTestGUI__Class* get_class() {
            return il2cpp::get_class<app::InteractionSystemTestGUI__Class>(type_info(), "RootMotion.Demos", "InteractionSystemTestGUI");
        }
        inline app::InteractionSystemTestGUI* create() {
            return il2cpp::create_object<app::InteractionSystemTestGUI>(get_class());
        }
    } // namespace InteractionSystemTestGUI
} // namespace app::classes::types
