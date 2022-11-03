#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneSettingsComponent {
        inline app::SceneSettingsComponent__Class** type_info = (app::SceneSettingsComponent__Class**)(modloader::win::memory::resolve_rva(0x0474C0E0));
        inline app::SceneSettingsComponent__Class* get_class() {
            return il2cpp::get_class<app::SceneSettingsComponent__Class>(type_info, "", "SceneSettingsComponent");
        }
        inline app::SceneSettingsComponent* create() {
            return il2cpp::create_object<app::SceneSettingsComponent>(get_class());
        }
    } // namespace SceneSettingsComponent
} // namespace app::classes::types
