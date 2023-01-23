#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimesliceResourceDestroyTask_TimeslicedDestroy_d_10__Class.h>
#include <Modloader/app/structs/TimesliceResourceDestroyTask_TimeslicedDestroy_d_10.h>

namespace app::classes::types {
    namespace TimesliceResourceDestroyTask_TimeslicedDestroy_d_10 {
        inline app::TimesliceResourceDestroyTask_TimeslicedDestroy_d_10__Class** type_info = (app::TimesliceResourceDestroyTask_TimeslicedDestroy_d_10__Class**)(modloader::win::memory::resolve_rva(0x04775550));
        inline app::TimesliceResourceDestroyTask_TimeslicedDestroy_d_10__Class* get_class() {
            return il2cpp::get_nested_class<app::TimesliceResourceDestroyTask_TimeslicedDestroy_d_10__Class>(type_info, "Moon.TimeSlicer", "TimesliceResourceDestroyTask", "<TimeslicedDestroy>d__10");
        }
        inline app::TimesliceResourceDestroyTask_TimeslicedDestroy_d_10* create() {
            return il2cpp::create_object<app::TimesliceResourceDestroyTask_TimeslicedDestroy_d_10>(get_class());
        }
    } // namespace TimesliceResourceDestroyTask_TimeslicedDestroy_d_10
} // namespace app::classes::types
