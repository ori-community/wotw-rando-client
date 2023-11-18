#pragma once
#include <Modloader/app/structs/TimesliceResourceDestroyTask.h>
#include <Modloader/app/structs/TimesliceResourceDestroyTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimesliceResourceDestroyTask {
        inline app::TimesliceResourceDestroyTask__Class** type_info() {
            static app::TimesliceResourceDestroyTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimesliceResourceDestroyTask__Class**)(modloader::win::memory::resolve_rva(0x04755208));
            }
            return cache;
        }
        inline app::TimesliceResourceDestroyTask__Class* get_class() {
            return il2cpp::get_class<app::TimesliceResourceDestroyTask__Class>(type_info(), "Moon.TimeSlicer", "TimesliceResourceDestroyTask");
        }
        inline app::TimesliceResourceDestroyTask* create() {
            return il2cpp::create_object<app::TimesliceResourceDestroyTask>(get_class());
        }
    } // namespace TimesliceResourceDestroyTask
} // namespace app::classes::types
