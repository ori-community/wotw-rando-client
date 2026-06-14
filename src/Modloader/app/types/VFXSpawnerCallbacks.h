#pragma once
#include <Modloader/app/structs/VFXSpawnerCallbacks.h>
#include <Modloader/app/structs/VFXSpawnerCallbacks__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VFXSpawnerCallbacks {
        inline app::VFXSpawnerCallbacks__Class** type_info() {
            static app::VFXSpawnerCallbacks__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VFXSpawnerCallbacks__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VFXSpawnerCallbacks__Class* get_class() {
            return il2cpp::get_class<app::VFXSpawnerCallbacks__Class>(type_info(), "UnityEngine.Experimental.VFX", "VFXSpawnerCallbacks");
        }
        inline app::VFXSpawnerCallbacks* create() {
            return il2cpp::create_object<app::VFXSpawnerCallbacks>(get_class());
        }
    } // namespace VFXSpawnerCallbacks
} // namespace app::classes::types
