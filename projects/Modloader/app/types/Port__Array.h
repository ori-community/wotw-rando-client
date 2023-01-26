#pragma once
#include <Modloader/app/structs/Port__Array.h>
#include <Modloader/app/structs/Port__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Port__Array {
        inline app::Port__Array__Class** type_info() {
            static app::Port__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Port__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Port__Array__Class* get_class() {
            return il2cpp::get_class<app::Port__Array__Class>(type_info(), "PlayFab.MultiplayerModels", "Port[]");
        }
        inline app::Port__Array* create() {
            return il2cpp::create_object<app::Port__Array>(get_class());
        }
    } // namespace Port__Array
} // namespace app::classes::types
