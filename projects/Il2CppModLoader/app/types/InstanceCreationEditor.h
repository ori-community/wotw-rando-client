#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstanceCreationEditor {
        namespace {
            app::InstanceCreationEditor__Class* type_info_ref = nullptr;
        }
        app::InstanceCreationEditor__Class** type_info = &type_info_ref;
        inline app::InstanceCreationEditor__Class* get_class() {
            return il2cpp::get_class<app::InstanceCreationEditor__Class>(type_info, "System.ComponentModel", "InstanceCreationEditor");
        }
        inline app::InstanceCreationEditor* create() {
            return il2cpp::create_object<app::InstanceCreationEditor>(get_class());
        }
    } // namespace InstanceCreationEditor
} // namespace app::classes::types
