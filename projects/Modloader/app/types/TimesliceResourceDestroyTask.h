#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimesliceResourceDestroyTask {
        inline app::TimesliceResourceDestroyTask__Class** type_info = (app::TimesliceResourceDestroyTask__Class**)(modloader::win::memory::resolve_rva(0x04755208));
        inline app::TimesliceResourceDestroyTask__Class* get_class() {
            return il2cpp::get_class<app::TimesliceResourceDestroyTask__Class>(type_info, "Moon.TimeSlicer", "TimesliceResourceDestroyTask");
        }
        inline app::TimesliceResourceDestroyTask* create() {
            return il2cpp::create_object<app::TimesliceResourceDestroyTask>(get_class());
        }
    } // namespace TimesliceResourceDestroyTask
} // namespace app::classes::types
