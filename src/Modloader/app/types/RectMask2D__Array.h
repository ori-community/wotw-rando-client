#pragma once
#include <Modloader/app/structs/RectMask2D__Array.h>
#include <Modloader/app/structs/RectMask2D__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RectMask2D__Array {
        inline app::RectMask2D__Array__Class** type_info() {
            static app::RectMask2D__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RectMask2D__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RectMask2D__Array__Class* get_class() {
            return il2cpp::get_class<app::RectMask2D__Array__Class>(type_info(), "UnityEngine.UI", "RectMask2D[]");
        }
        inline app::RectMask2D__Array* create() {
            return il2cpp::create_object<app::RectMask2D__Array>(get_class());
        }
    } // namespace RectMask2D__Array
} // namespace app::classes::types
