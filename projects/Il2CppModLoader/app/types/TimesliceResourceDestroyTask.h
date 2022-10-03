#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimesliceResourceDestroyTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimesliceResourceDestroyTask__Class** type_info;
        inline app::TimesliceResourceDestroyTask__Class* get_class() {
            return il2cpp::get_class<app::TimesliceResourceDestroyTask__Class>(type_info, "Moon.TimeSlicer", "TimesliceResourceDestroyTask");
        }
        inline app::TimesliceResourceDestroyTask* create() {
            return il2cpp::create_object<app::TimesliceResourceDestroyTask>(get_class());
        }
    } // namespace TimesliceResourceDestroyTask
} // namespace app::classes::types
