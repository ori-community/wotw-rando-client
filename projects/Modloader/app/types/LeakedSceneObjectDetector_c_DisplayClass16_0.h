#pragma once
#include <Modloader/app/structs/LeakedSceneObjectDetector_c_DisplayClass16_0.h>
#include <Modloader/app/structs/LeakedSceneObjectDetector_c_DisplayClass16_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeakedSceneObjectDetector_c_DisplayClass16_0 {
        inline app::LeakedSceneObjectDetector_c_DisplayClass16_0__Class** type_info() {
            static app::LeakedSceneObjectDetector_c_DisplayClass16_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeakedSceneObjectDetector_c_DisplayClass16_0__Class**)(modloader::win::memory::resolve_rva(0x0476F298));
            }
            return cache;
        }
        inline app::LeakedSceneObjectDetector_c_DisplayClass16_0__Class* get_class() {
            return il2cpp::get_nested_class<app::LeakedSceneObjectDetector_c_DisplayClass16_0__Class>(type_info(), "", "LeakedSceneObjectDetector", "<>c__DisplayClass16_0");
        }
        inline app::LeakedSceneObjectDetector_c_DisplayClass16_0* create() {
            return il2cpp::create_object<app::LeakedSceneObjectDetector_c_DisplayClass16_0>(get_class());
        }
    } // namespace LeakedSceneObjectDetector_c_DisplayClass16_0
} // namespace app::classes::types
