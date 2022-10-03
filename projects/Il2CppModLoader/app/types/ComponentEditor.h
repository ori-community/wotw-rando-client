#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ComponentEditor {
        namespace {
            app::ComponentEditor__Class* type_info_ref = nullptr;
        }
        app::ComponentEditor__Class** type_info = &type_info_ref;
        inline app::ComponentEditor__Class* get_class() {
            return il2cpp::get_class<app::ComponentEditor__Class>(type_info, "System.ComponentModel", "ComponentEditor");
        }
        inline app::ComponentEditor* create() {
            return il2cpp::create_object<app::ComponentEditor>(get_class());
        }
    } // namespace ComponentEditor
} // namespace app::classes::types
