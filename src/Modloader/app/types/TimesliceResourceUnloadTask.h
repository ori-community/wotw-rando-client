#pragma once
#include <Modloader/app/structs/TimesliceResourceUnloadTask.h>
#include <Modloader/app/structs/TimesliceResourceUnloadTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimesliceResourceUnloadTask {
        inline app::TimesliceResourceUnloadTask__Class** type_info() {
            static app::TimesliceResourceUnloadTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimesliceResourceUnloadTask__Class**)(modloader::win::memory::resolve_rva(0x0470E3D8));
            }
            return cache;
        }
        inline app::TimesliceResourceUnloadTask__Class* get_class() {
            return il2cpp::get_class<app::TimesliceResourceUnloadTask__Class>(type_info(), "Moon.TimeSlicer", "TimesliceResourceUnloadTask");
        }
        inline app::TimesliceResourceUnloadTask* create() {
            return il2cpp::create_object<app::TimesliceResourceUnloadTask>(get_class());
        }
    } // namespace TimesliceResourceUnloadTask
} // namespace app::classes::types
