#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ModifierSampleTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ModifierSampleTask__Class** type_info;
        inline app::ModifierSampleTask__Class* get_class() {
            return il2cpp::get_class<app::ModifierSampleTask__Class>(type_info, "Moon.ArtOptimization", "ModifierSampleTask");
        }
        inline app::ModifierSampleTask* create() {
            return il2cpp::create_object<app::ModifierSampleTask>(get_class());
        }
    } // namespace ModifierSampleTask
} // namespace app::classes::types
