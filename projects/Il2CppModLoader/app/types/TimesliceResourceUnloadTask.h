#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimesliceResourceUnloadTask {
        inline app::TimesliceResourceUnloadTask__Class** type_info = (app::TimesliceResourceUnloadTask__Class**)(modloader::win::memory::resolve_rva(0x0470E3D8));
        inline app::TimesliceResourceUnloadTask__Class* get_class() {
            return il2cpp::get_class<app::TimesliceResourceUnloadTask__Class>(type_info, "Moon.TimeSlicer", "TimesliceResourceUnloadTask");
        }
        inline app::TimesliceResourceUnloadTask* create() {
            return il2cpp::create_object<app::TimesliceResourceUnloadTask>(get_class());
        }
    } // namespace TimesliceResourceUnloadTask
} // namespace app::classes::types
