#pragma once
#include <Modloader/app/structs/MenuScreenStack.h>
#include <Modloader/app/structs/MenuScreenStack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MenuScreenStack {
        inline app::MenuScreenStack__Class** type_info() {
            static app::MenuScreenStack__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MenuScreenStack__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MenuScreenStack__Class* get_class() {
            return il2cpp::get_class<app::MenuScreenStack__Class>(type_info(), "", "MenuScreenStack");
        }
        inline app::MenuScreenStack* create() {
            return il2cpp::create_object<app::MenuScreenStack>(get_class());
        }
    } // namespace MenuScreenStack
} // namespace app::classes::types
