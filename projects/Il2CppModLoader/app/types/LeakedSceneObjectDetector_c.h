#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeakedSceneObjectDetector_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeakedSceneObjectDetector_c__Class** type_info;
        inline app::LeakedSceneObjectDetector_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LeakedSceneObjectDetector_c__Class>(type_info, "", "LeakedSceneObjectDetector", "<>c");
        }
        inline app::LeakedSceneObjectDetector_c* create() {
            return il2cpp::create_object<app::LeakedSceneObjectDetector_c>(get_class());
        }
    } // namespace LeakedSceneObjectDetector_c
} // namespace app::classes::types
