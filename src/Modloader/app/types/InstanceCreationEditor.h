#pragma once
#include <Modloader/app/structs/InstanceCreationEditor.h>
#include <Modloader/app/structs/InstanceCreationEditor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstanceCreationEditor {
        inline app::InstanceCreationEditor__Class** type_info() {
            static app::InstanceCreationEditor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InstanceCreationEditor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InstanceCreationEditor__Class* get_class() {
            return il2cpp::get_class<app::InstanceCreationEditor__Class>(type_info(), "System.ComponentModel", "InstanceCreationEditor");
        }
        inline app::InstanceCreationEditor* create() {
            return il2cpp::create_object<app::InstanceCreationEditor>(get_class());
        }
    } // namespace InstanceCreationEditor
} // namespace app::classes::types
