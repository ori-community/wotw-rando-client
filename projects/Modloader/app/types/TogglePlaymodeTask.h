#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TogglePlaymodeTask {
        namespace {
            inline app::TogglePlaymodeTask__Class* type_info_ref = nullptr;
        }
        inline app::TogglePlaymodeTask__Class** type_info = &type_info_ref;
        inline app::TogglePlaymodeTask__Class* get_class() {
            return il2cpp::get_class<app::TogglePlaymodeTask__Class>(type_info, "Moon.ArtOptimization", "TogglePlaymodeTask");
        }
        inline app::TogglePlaymodeTask* create() {
            return il2cpp::create_object<app::TogglePlaymodeTask>(get_class());
        }
    } // namespace TogglePlaymodeTask
} // namespace app::classes::types
