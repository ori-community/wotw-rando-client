#pragma once
#include <Modloader/app/structs/YogaNode__Array.h>
#include <Modloader/app/structs/YogaNode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace YogaNode__Array {
        inline app::YogaNode__Array__Class** type_info() {
            static app::YogaNode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::YogaNode__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::YogaNode__Array__Class* get_class() {
            return il2cpp::get_class<app::YogaNode__Array__Class>(type_info(), "UnityEngine.Yoga", "YogaNode[]");
        }
        inline app::YogaNode__Array* create() {
            return il2cpp::create_object<app::YogaNode__Array>(get_class());
        }
    } // namespace YogaNode__Array
} // namespace app::classes::types
