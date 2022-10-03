#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimesliceResourceUnloadTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimesliceResourceUnloadTask__Class** type_info;
        inline app::TimesliceResourceUnloadTask__Class* get_class() {
            return il2cpp::get_class<app::TimesliceResourceUnloadTask__Class>(type_info, "Moon.TimeSlicer", "TimesliceResourceUnloadTask");
        }
        inline app::TimesliceResourceUnloadTask* create() {
            return il2cpp::create_object<app::TimesliceResourceUnloadTask>(get_class());
        }
    } // namespace TimesliceResourceUnloadTask
} // namespace app::classes::types
