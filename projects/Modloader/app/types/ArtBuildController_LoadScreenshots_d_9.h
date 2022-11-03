#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ArtBuildController_LoadScreenshots_d_9 {
        inline app::ArtBuildController_LoadScreenshots_d_9__Class** type_info = (app::ArtBuildController_LoadScreenshots_d_9__Class**)(modloader::win::memory::resolve_rva(0x04783758));
        inline app::ArtBuildController_LoadScreenshots_d_9__Class* get_class() {
            return il2cpp::get_nested_class<app::ArtBuildController_LoadScreenshots_d_9__Class>(type_info, "", "ArtBuildController", "<LoadScreenshots>d__9");
        }
        inline app::ArtBuildController_LoadScreenshots_d_9* create() {
            return il2cpp::create_object<app::ArtBuildController_LoadScreenshots_d_9>(get_class());
        }
    } // namespace ArtBuildController_LoadScreenshots_d_9
} // namespace app::classes::types
