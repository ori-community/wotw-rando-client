#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenePreloading_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScenePreloading_c__Class** type_info;
        inline app::ScenePreloading_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ScenePreloading_c__Class>(type_info, "Moon.Timeline", "ScenePreloading", "<>c");
        }
        inline app::ScenePreloading_c* create() {
            return il2cpp::create_object<app::ScenePreloading_c>(get_class());
        }
    } // namespace ScenePreloading_c
} // namespace app::classes::types
