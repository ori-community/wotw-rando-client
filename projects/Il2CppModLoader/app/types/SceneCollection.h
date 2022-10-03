#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneCollection {
        namespace {
            app::SceneCollection__Class* type_info_ref = nullptr;
        }
        app::SceneCollection__Class** type_info = &type_info_ref;
        inline app::SceneCollection__Class* get_class() {
            return il2cpp::get_class<app::SceneCollection__Class>(type_info, "", "SceneCollection");
        }
        inline app::SceneCollection* create() {
            return il2cpp::create_object<app::SceneCollection>(get_class());
        }
    } // namespace SceneCollection
} // namespace app::classes::types
