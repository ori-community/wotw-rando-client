#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneOperation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneOperation__Class** type_info;
        inline app::SceneOperation__Class* get_class() {
            return il2cpp::get_class<app::SceneOperation__Class>(type_info, "", "SceneOperation");
        }
        inline app::SceneOperation* create() {
            return il2cpp::create_object<app::SceneOperation>(get_class());
        }
        inline app::SceneOperation__Boxed* box(app::SceneOperation value) {
            return il2cpp::box_value<app::SceneOperation__Boxed>(get_class(), value);
        }
        inline app::SceneOperation__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneOperation__Array>(get_class(), size);
        }
    } // namespace SceneOperation
} // namespace app::classes::types
