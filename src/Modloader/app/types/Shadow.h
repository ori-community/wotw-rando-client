#pragma once
#include <Modloader/app/structs/Shadow.h>
#include <Modloader/app/structs/Shadow__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Shadow {
        inline app::Shadow__Class** type_info() {
            static app::Shadow__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Shadow__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Shadow__Class* get_class() {
            return il2cpp::get_class<app::Shadow__Class>(type_info(), "UnityEngine.UI", "Shadow");
        }
        inline app::Shadow* create() {
            return il2cpp::create_object<app::Shadow>(get_class());
        }
    } // namespace Shadow
} // namespace app::classes::types
