#pragma once
#include <Modloader/app/structs/WorldAnchor.h>
#include <Modloader/app/structs/WorldAnchor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldAnchor {
        inline app::WorldAnchor__Class** type_info() {
            static app::WorldAnchor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WorldAnchor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WorldAnchor__Class* get_class() {
            return il2cpp::get_class<app::WorldAnchor__Class>(type_info(), "UnityEngine.XR.WSA", "WorldAnchor");
        }
        inline app::WorldAnchor* create() {
            return il2cpp::create_object<app::WorldAnchor>(get_class());
        }
    } // namespace WorldAnchor
} // namespace app::classes::types
