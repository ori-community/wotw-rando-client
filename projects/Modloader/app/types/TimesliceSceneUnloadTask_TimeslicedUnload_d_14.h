#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimesliceSceneUnloadTask_TimeslicedUnload_d_14 {
        inline app::TimesliceSceneUnloadTask_TimeslicedUnload_d_14__Class** type_info = (app::TimesliceSceneUnloadTask_TimeslicedUnload_d_14__Class**)(modloader::win::memory::resolve_rva(0x04774090));
        inline app::TimesliceSceneUnloadTask_TimeslicedUnload_d_14__Class* get_class() {
            return il2cpp::get_nested_class<app::TimesliceSceneUnloadTask_TimeslicedUnload_d_14__Class>(type_info, "Moon.TimeSlicer", "TimesliceSceneUnloadTask", "<TimeslicedUnload>d__14");
        }
        inline app::TimesliceSceneUnloadTask_TimeslicedUnload_d_14* create() {
            return il2cpp::create_object<app::TimesliceSceneUnloadTask_TimeslicedUnload_d_14>(get_class());
        }
    } // namespace TimesliceSceneUnloadTask_TimeslicedUnload_d_14
} // namespace app::classes::types
