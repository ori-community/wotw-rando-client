#pragma once
#include <Modloader/app/structs/WorldMapLogic.h>
#include <Modloader/app/structs/WorldMapLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldMapLogic {
        inline app::WorldMapLogic__Class** type_info() {
            static app::WorldMapLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WorldMapLogic__Class**)(modloader::win::memory::resolve_rva(0x04781140));
            }
            return cache;
        }
        inline app::WorldMapLogic__Class* get_class() {
            return il2cpp::get_class<app::WorldMapLogic__Class>(type_info(), "", "WorldMapLogic");
        }
        inline app::WorldMapLogic* create() {
            return il2cpp::create_object<app::WorldMapLogic>(get_class());
        }
    } // namespace WorldMapLogic
} // namespace app::classes::types
