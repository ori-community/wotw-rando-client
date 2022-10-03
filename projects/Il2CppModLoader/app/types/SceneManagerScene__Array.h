#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneManagerScene__Array {
        namespace {
            app::SceneManagerScene__Array__Class* type_info_ref = nullptr;
        }
        app::SceneManagerScene__Array__Class** type_info = &type_info_ref;
        inline app::SceneManagerScene__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneManagerScene__Array__Class>(type_info, "", "SceneManagerScene[]");
        }
        inline app::SceneManagerScene__Array* create() {
            return il2cpp::create_object<app::SceneManagerScene__Array>(get_class());
        }
    } // namespace SceneManagerScene__Array
} // namespace app::classes::types
