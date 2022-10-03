#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimesliceSceneUnloadTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimesliceSceneUnloadTask__Class** type_info;
        inline app::TimesliceSceneUnloadTask__Class* get_class() {
            return il2cpp::get_class<app::TimesliceSceneUnloadTask__Class>(type_info, "Moon.TimeSlicer", "TimesliceSceneUnloadTask");
        }
        inline app::TimesliceSceneUnloadTask* create() {
            return il2cpp::create_object<app::TimesliceSceneUnloadTask>(get_class());
        }
    } // namespace TimesliceSceneUnloadTask
} // namespace app::classes::types
