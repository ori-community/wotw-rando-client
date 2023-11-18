#pragma once
#include <Modloader/app/structs/ComponentEditor.h>
#include <Modloader/app/structs/ComponentEditor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComponentEditor {
        inline app::ComponentEditor__Class** type_info() {
            static app::ComponentEditor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComponentEditor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComponentEditor__Class* get_class() {
            return il2cpp::get_class<app::ComponentEditor__Class>(type_info(), "System.ComponentModel", "ComponentEditor");
        }
        inline app::ComponentEditor* create() {
            return il2cpp::create_object<app::ComponentEditor>(get_class());
        }
    } // namespace ComponentEditor
} // namespace app::classes::types
