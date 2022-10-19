#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnloadTexturesTask {
        namespace {
            inline app::UnloadTexturesTask__Class* type_info_ref = nullptr;
        }
        inline app::UnloadTexturesTask__Class** type_info = &type_info_ref;
        inline app::UnloadTexturesTask__Class* get_class() {
            return il2cpp::get_class<app::UnloadTexturesTask__Class>(type_info, "Moon.ArtOptimization", "UnloadTexturesTask");
        }
        inline app::UnloadTexturesTask* create() {
            return il2cpp::create_object<app::UnloadTexturesTask>(get_class());
        }
    } // namespace UnloadTexturesTask
} // namespace app::classes::types
