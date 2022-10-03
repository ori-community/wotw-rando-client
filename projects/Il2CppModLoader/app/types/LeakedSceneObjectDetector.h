#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeakedSceneObjectDetector {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeakedSceneObjectDetector__Class** type_info;
        inline app::LeakedSceneObjectDetector__Class* get_class() {
            return il2cpp::get_class<app::LeakedSceneObjectDetector__Class>(type_info, "", "LeakedSceneObjectDetector");
        }
        inline app::LeakedSceneObjectDetector* create() {
            return il2cpp::create_object<app::LeakedSceneObjectDetector>(get_class());
        }
    } // namespace LeakedSceneObjectDetector
} // namespace app::classes::types
