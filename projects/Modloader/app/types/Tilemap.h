#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Tilemap {
        namespace {
            inline app::Tilemap__Class* type_info_ref = nullptr;
        }
        inline app::Tilemap__Class** type_info = &type_info_ref;
        inline app::Tilemap__Class* get_class() {
            return il2cpp::get_class<app::Tilemap__Class>(type_info, "UnityEngine.Tilemaps", "Tilemap");
        }
        inline app::Tilemap* create() {
            return il2cpp::create_object<app::Tilemap>(get_class());
        }
    } // namespace Tilemap
} // namespace app::classes::types
