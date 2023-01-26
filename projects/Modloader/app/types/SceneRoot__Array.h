#pragma once
#include <Modloader/app/structs/SceneRoot__Array.h>
#include <Modloader/app/structs/SceneRoot__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneRoot__Array {
        inline app::SceneRoot__Array__Class** type_info() {
            static app::SceneRoot__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneRoot__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneRoot__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneRoot__Array__Class>(type_info(), "", "SceneRoot[]");
        }
        inline app::SceneRoot__Array* create() {
            return il2cpp::create_object<app::SceneRoot__Array>(get_class());
        }
    } // namespace SceneRoot__Array
} // namespace app::classes::types
