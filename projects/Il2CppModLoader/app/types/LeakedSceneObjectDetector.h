#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeakedSceneObjectDetector {
        inline app::LeakedSceneObjectDetector__Class** type_info = (app::LeakedSceneObjectDetector__Class**)(modloader::win::memory::resolve_rva(0x047147C8));
        inline app::LeakedSceneObjectDetector__Class* get_class() {
            return il2cpp::get_class<app::LeakedSceneObjectDetector__Class>(type_info, "", "LeakedSceneObjectDetector");
        }
        inline app::LeakedSceneObjectDetector* create() {
            return il2cpp::create_object<app::LeakedSceneObjectDetector>(get_class());
        }
    } // namespace LeakedSceneObjectDetector
} // namespace app::classes::types
