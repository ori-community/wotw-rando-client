#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ToggleModifierTask__Class.h>
#include <Modloader/app/structs/ToggleModifierTask.h>

namespace app::classes::types {
    namespace ToggleModifierTask {
        namespace {
            inline app::ToggleModifierTask__Class* type_info_ref = nullptr;
        }
        inline app::ToggleModifierTask__Class** type_info = &type_info_ref;
        inline app::ToggleModifierTask__Class* get_class() {
            return il2cpp::get_class<app::ToggleModifierTask__Class>(type_info, "Moon.ArtOptimization", "ToggleModifierTask");
        }
        inline app::ToggleModifierTask* create() {
            return il2cpp::create_object<app::ToggleModifierTask>(get_class());
        }
    } // namespace ToggleModifierTask
} // namespace app::classes::types
