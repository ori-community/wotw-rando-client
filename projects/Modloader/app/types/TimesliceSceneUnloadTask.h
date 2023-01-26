#pragma once
#include <Modloader/app/structs/TimesliceSceneUnloadTask.h>
#include <Modloader/app/structs/TimesliceSceneUnloadTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimesliceSceneUnloadTask {
        inline app::TimesliceSceneUnloadTask__Class** type_info() {
            static app::TimesliceSceneUnloadTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimesliceSceneUnloadTask__Class**)(modloader::win::memory::resolve_rva(0x0477DB88));
            }
            return cache;
        }
        inline app::TimesliceSceneUnloadTask__Class* get_class() {
            return il2cpp::get_class<app::TimesliceSceneUnloadTask__Class>(type_info(), "Moon.TimeSlicer", "TimesliceSceneUnloadTask");
        }
        inline app::TimesliceSceneUnloadTask* create() {
            return il2cpp::create_object<app::TimesliceSceneUnloadTask>(get_class());
        }
    } // namespace TimesliceSceneUnloadTask
} // namespace app::classes::types
