#pragma once
#include <Modloader/app/structs/StickSpawner.h>
#include <Modloader/app/structs/StickSpawner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StickSpawner {
        inline app::StickSpawner__Class** type_info() {
            static app::StickSpawner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StickSpawner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StickSpawner__Class* get_class() {
            return il2cpp::get_class<app::StickSpawner__Class>(type_info(), "Moon", "StickSpawner");
        }
        inline app::StickSpawner* create() {
            return il2cpp::create_object<app::StickSpawner>(get_class());
        }
    } // namespace StickSpawner
} // namespace app::classes::types
