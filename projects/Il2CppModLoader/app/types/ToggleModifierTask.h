#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ToggleModifierTask {
        namespace {
            app::ToggleModifierTask__Class* type_info_ref = nullptr;
        }
        app::ToggleModifierTask__Class** type_info = &type_info_ref;
        inline app::ToggleModifierTask__Class* get_class() {
            return il2cpp::get_class<app::ToggleModifierTask__Class>(type_info, "Moon.ArtOptimization", "ToggleModifierTask");
        }
        inline app::ToggleModifierTask* create() {
            return il2cpp::create_object<app::ToggleModifierTask>(get_class());
        }
    } // namespace ToggleModifierTask
} // namespace app::classes::types
