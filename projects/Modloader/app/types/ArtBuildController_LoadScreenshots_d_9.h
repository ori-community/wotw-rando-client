#pragma once
#include <Modloader/app/structs/ArtBuildController_LoadScreenshots_d_9.h>
#include <Modloader/app/structs/ArtBuildController_LoadScreenshots_d_9__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArtBuildController_LoadScreenshots_d_9 {
        inline app::ArtBuildController_LoadScreenshots_d_9__Class** type_info() {
            static app::ArtBuildController_LoadScreenshots_d_9__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArtBuildController_LoadScreenshots_d_9__Class**)(modloader::win::memory::resolve_rva(0x04783758));
            }
            return cache;
        }
        inline app::ArtBuildController_LoadScreenshots_d_9__Class* get_class() {
            return il2cpp::get_nested_class<app::ArtBuildController_LoadScreenshots_d_9__Class>(type_info(), "", "ArtBuildController", "<LoadScreenshots>d__9");
        }
        inline app::ArtBuildController_LoadScreenshots_d_9* create() {
            return il2cpp::create_object<app::ArtBuildController_LoadScreenshots_d_9>(get_class());
        }
    } // namespace ArtBuildController_LoadScreenshots_d_9
} // namespace app::classes::types
