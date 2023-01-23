#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MapMakerGiveMapBehaviour__Class.h>
#include <Modloader/app/structs/MapMakerGiveMapBehaviour.h>

namespace app::classes::types {
    namespace MapMakerGiveMapBehaviour {
        namespace {
            inline app::MapMakerGiveMapBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MapMakerGiveMapBehaviour__Class** type_info = &type_info_ref;
        inline app::MapMakerGiveMapBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MapMakerGiveMapBehaviour__Class>(type_info, "Moon", "MapMakerGiveMapBehaviour");
        }
        inline app::MapMakerGiveMapBehaviour* create() {
            return il2cpp::create_object<app::MapMakerGiveMapBehaviour>(get_class());
        }
    } // namespace MapMakerGiveMapBehaviour
} // namespace app::classes::types
