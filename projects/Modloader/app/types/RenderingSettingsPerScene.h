#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RenderingSettingsPerScene__Class.h>
#include <Modloader/app/structs/RenderingSettingsPerScene.h>

namespace app::classes::types {
    namespace RenderingSettingsPerScene {
        inline app::RenderingSettingsPerScene__Class** type_info = (app::RenderingSettingsPerScene__Class**)(modloader::win::memory::resolve_rva(0x0471FEB0));
        inline app::RenderingSettingsPerScene__Class* get_class() {
            return il2cpp::get_class<app::RenderingSettingsPerScene__Class>(type_info, "", "RenderingSettingsPerScene");
        }
        inline app::RenderingSettingsPerScene* create() {
            return il2cpp::create_object<app::RenderingSettingsPerScene>(get_class());
        }
    } // namespace RenderingSettingsPerScene
} // namespace app::classes::types
