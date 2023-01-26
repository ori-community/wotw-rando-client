#pragma once
#include <Modloader/app/structs/SceneOperation__Array.h>
#include <Modloader/app/structs/SceneOperation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneOperation__Array {
        inline app::SceneOperation__Array__Class** type_info() {
            static app::SceneOperation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneOperation__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneOperation__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneOperation__Array__Class>(type_info(), "", "SceneOperation[]");
        }
        inline app::SceneOperation__Array* create() {
            return il2cpp::create_object<app::SceneOperation__Array>(get_class());
        }
    } // namespace SceneOperation__Array
} // namespace app::classes::types
