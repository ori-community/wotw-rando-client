#pragma once
#include <Modloader/app/structs/WorldMapIconType__Enum.h>
#include <Modloader/app/structs/WorldMapIconType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldMapIconType__Enum {
        inline app::WorldMapIconType__Enum__Class** type_info() {
            static app::WorldMapIconType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WorldMapIconType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474C930));
            }
            return cache;
        }
        inline app::WorldMapIconType__Enum__Class* get_class() {
            return il2cpp::get_class<app::WorldMapIconType__Enum__Class>(type_info(), "", "WorldMapIconType");
        }
        inline app::WorldMapIconType__Enum* create() {
            return il2cpp::create_object<app::WorldMapIconType__Enum>(get_class());
        }
    } // namespace WorldMapIconType__Enum
} // namespace app::classes::types
