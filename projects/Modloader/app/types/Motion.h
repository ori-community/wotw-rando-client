#pragma once
#include <Modloader/app/structs/Motion.h>
#include <Modloader/app/structs/Motion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Motion {
        inline app::Motion__Class** type_info() {
            static app::Motion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Motion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Motion__Class* get_class() {
            return il2cpp::get_class<app::Motion__Class>(type_info(), "UnityEngine", "Motion");
        }
        inline app::Motion* create() {
            return il2cpp::create_object<app::Motion>(get_class());
        }
    } // namespace Motion
} // namespace app::classes::types
