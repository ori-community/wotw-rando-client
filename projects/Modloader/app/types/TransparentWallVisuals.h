#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TransparentWallVisuals__Class.h>
#include <Modloader/app/structs/TransparentWallVisuals.h>

namespace app::classes::types {
    namespace TransparentWallVisuals {
        inline app::TransparentWallVisuals__Class** type_info = (app::TransparentWallVisuals__Class**)(modloader::win::memory::resolve_rva(0x0478AB20));
        inline app::TransparentWallVisuals__Class* get_class() {
            return il2cpp::get_class<app::TransparentWallVisuals__Class>(type_info, "", "TransparentWallVisuals");
        }
        inline app::TransparentWallVisuals* create() {
            return il2cpp::create_object<app::TransparentWallVisuals>(get_class());
        }
    } // namespace TransparentWallVisuals
} // namespace app::classes::types
