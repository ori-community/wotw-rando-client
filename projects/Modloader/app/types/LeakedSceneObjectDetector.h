#pragma once
#include <Modloader/app/structs/LeakedSceneObjectDetector.h>
#include <Modloader/app/structs/LeakedSceneObjectDetector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeakedSceneObjectDetector {
        inline app::LeakedSceneObjectDetector__Class** type_info() {
            static app::LeakedSceneObjectDetector__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeakedSceneObjectDetector__Class**)(modloader::win::memory::resolve_rva(0x047147C8));
            }
            return cache;
        }
        inline app::LeakedSceneObjectDetector__Class* get_class() {
            return il2cpp::get_class<app::LeakedSceneObjectDetector__Class>(type_info(), "", "LeakedSceneObjectDetector");
        }
        inline app::LeakedSceneObjectDetector* create() {
            return il2cpp::create_object<app::LeakedSceneObjectDetector>(get_class());
        }
    } // namespace LeakedSceneObjectDetector
} // namespace app::classes::types
