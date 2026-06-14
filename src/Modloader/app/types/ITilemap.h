#pragma once
#include <Modloader/app/structs/ITilemap.h>
#include <Modloader/app/structs/ITilemap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITilemap {
        inline app::ITilemap__Class** type_info() {
            static app::ITilemap__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITilemap__Class**)(modloader::win::memory::resolve_rva(0x0475C5A8));
            }
            return cache;
        }
        inline app::ITilemap__Class* get_class() {
            return il2cpp::get_class<app::ITilemap__Class>(type_info(), "UnityEngine.Tilemaps", "ITilemap");
        }
        inline app::ITilemap* create() {
            return il2cpp::create_object<app::ITilemap>(get_class());
        }
    } // namespace ITilemap
} // namespace app::classes::types
