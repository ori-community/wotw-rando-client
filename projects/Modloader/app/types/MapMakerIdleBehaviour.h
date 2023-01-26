#pragma once
#include <Modloader/app/structs/MapMakerIdleBehaviour.h>
#include <Modloader/app/structs/MapMakerIdleBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MapMakerIdleBehaviour {
        inline app::MapMakerIdleBehaviour__Class** type_info() {
            static app::MapMakerIdleBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MapMakerIdleBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MapMakerIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MapMakerIdleBehaviour__Class>(type_info(), "Moon", "MapMakerIdleBehaviour");
        }
        inline app::MapMakerIdleBehaviour* create() {
            return il2cpp::create_object<app::MapMakerIdleBehaviour>(get_class());
        }
    } // namespace MapMakerIdleBehaviour
} // namespace app::classes::types
