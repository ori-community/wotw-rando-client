#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeakedSceneObjectDetector_c {
        inline app::LeakedSceneObjectDetector_c__Class** type_info = (app::LeakedSceneObjectDetector_c__Class**)(modloader::win::memory::resolve_rva(0x0476D078));
        inline app::LeakedSceneObjectDetector_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LeakedSceneObjectDetector_c__Class>(type_info, "", "LeakedSceneObjectDetector", "<>c");
        }
        inline app::LeakedSceneObjectDetector_c* create() {
            return il2cpp::create_object<app::LeakedSceneObjectDetector_c>(get_class());
        }
    } // namespace LeakedSceneObjectDetector_c
} // namespace app::classes::types
