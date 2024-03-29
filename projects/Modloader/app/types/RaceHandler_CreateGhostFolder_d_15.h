#pragma once
#include <Modloader/app/structs/RaceHandler_CreateGhostFolder_d_15.h>
#include <Modloader/app/structs/RaceHandler_CreateGhostFolder_d_15__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceHandler_CreateGhostFolder_d_15 {
        inline app::RaceHandler_CreateGhostFolder_d_15__Class** type_info() {
            static app::RaceHandler_CreateGhostFolder_d_15__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceHandler_CreateGhostFolder_d_15__Class**)(modloader::win::memory::resolve_rva(0x0474C698));
            }
            return cache;
        }
        inline app::RaceHandler_CreateGhostFolder_d_15__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceHandler_CreateGhostFolder_d_15__Class>(type_info(), "", "RaceHandler", "<CreateGhostFolder>d__15");
        }
        inline app::RaceHandler_CreateGhostFolder_d_15* create() {
            return il2cpp::create_object<app::RaceHandler_CreateGhostFolder_d_15>(get_class());
        }
    } // namespace RaceHandler_CreateGhostFolder_d_15
} // namespace app::classes::types
