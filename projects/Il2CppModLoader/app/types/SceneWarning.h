#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneWarning {
        namespace {
            app::SceneWarning__Class* type_info_ref = nullptr;
        }
        app::SceneWarning__Class** type_info = &type_info_ref;
        inline app::SceneWarning__Class* get_class() {
            return il2cpp::get_class<app::SceneWarning__Class>(type_info, "", "SceneWarning");
        }
        inline app::SceneWarning* create() {
            return il2cpp::create_object<app::SceneWarning>(get_class());
        }
    } // namespace SceneWarning
} // namespace app::classes::types
