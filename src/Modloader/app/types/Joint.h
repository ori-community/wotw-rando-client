#pragma once
#include <Modloader/app/structs/Joint.h>
#include <Modloader/app/structs/Joint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Joint {
        inline app::Joint__Class** type_info() {
            static app::Joint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Joint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Joint__Class* get_class() {
            return il2cpp::get_class<app::Joint__Class>(type_info(), "UnityEngine", "Joint");
        }
        inline app::Joint* create() {
            return il2cpp::create_object<app::Joint>(get_class());
        }
    } // namespace Joint
} // namespace app::classes::types
