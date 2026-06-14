#pragma once
#include <Modloader/app/structs/Avatar.h>
#include <Modloader/app/structs/Avatar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Avatar {
        inline app::Avatar__Class** type_info() {
            static app::Avatar__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Avatar__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Avatar__Class* get_class() {
            return il2cpp::get_class<app::Avatar__Class>(type_info(), "UnityEngine", "Avatar");
        }
        inline app::Avatar* create() {
            return il2cpp::create_object<app::Avatar>(get_class());
        }
    } // namespace Avatar
} // namespace app::classes::types
