#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimesliceResourceUnloadTask_TimeslicedUnload_d_10__Class.h>
#include <Modloader/app/structs/TimesliceResourceUnloadTask_TimeslicedUnload_d_10.h>

namespace app::classes::types {
    namespace TimesliceResourceUnloadTask_TimeslicedUnload_d_10 {
        inline app::TimesliceResourceUnloadTask_TimeslicedUnload_d_10__Class** type_info = (app::TimesliceResourceUnloadTask_TimeslicedUnload_d_10__Class**)(modloader::win::memory::resolve_rva(0x0474A060));
        inline app::TimesliceResourceUnloadTask_TimeslicedUnload_d_10__Class* get_class() {
            return il2cpp::get_nested_class<app::TimesliceResourceUnloadTask_TimeslicedUnload_d_10__Class>(type_info, "Moon.TimeSlicer", "TimesliceResourceUnloadTask", "<TimeslicedUnload>d__10");
        }
        inline app::TimesliceResourceUnloadTask_TimeslicedUnload_d_10* create() {
            return il2cpp::create_object<app::TimesliceResourceUnloadTask_TimeslicedUnload_d_10>(get_class());
        }
    } // namespace TimesliceResourceUnloadTask_TimeslicedUnload_d_10
} // namespace app::classes::types
