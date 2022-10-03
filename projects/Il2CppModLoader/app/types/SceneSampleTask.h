#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneSampleTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneSampleTask__Class** type_info;
        inline app::SceneSampleTask__Class* get_class() {
            return il2cpp::get_class<app::SceneSampleTask__Class>(type_info, "Moon.ArtOptimization", "SceneSampleTask");
        }
        inline app::SceneSampleTask* create() {
            return il2cpp::create_object<app::SceneSampleTask>(get_class());
        }
    } // namespace SceneSampleTask
} // namespace app::classes::types
