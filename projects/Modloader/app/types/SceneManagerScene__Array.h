#pragma once
#include <Modloader/app/structs/SceneManagerScene__Array.h>
#include <Modloader/app/structs/SceneManagerScene__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneManagerScene__Array {
        inline app::SceneManagerScene__Array__Class** type_info() {
            static app::SceneManagerScene__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneManagerScene__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneManagerScene__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneManagerScene__Array__Class>(type_info(), "", "SceneManagerScene[]");
        }
        inline app::SceneManagerScene__Array* create() {
            return il2cpp::create_object<app::SceneManagerScene__Array>(get_class());
        }
    } // namespace SceneManagerScene__Array
} // namespace app::classes::types
