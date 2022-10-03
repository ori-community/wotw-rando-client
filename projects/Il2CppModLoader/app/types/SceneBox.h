#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneBox {
        namespace {
            app::SceneBox__Class* type_info_ref = nullptr;
        }
        app::SceneBox__Class** type_info = &type_info_ref;
        inline app::SceneBox__Class* get_class() {
            return il2cpp::get_class<app::SceneBox__Class>(type_info, "", "SceneBox");
        }
        inline app::SceneBox* create() {
            return il2cpp::create_object<app::SceneBox>(get_class());
        }
    } // namespace SceneBox
} // namespace app::classes::types
