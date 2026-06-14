#pragma once
#include <Modloader/app/structs/Graphic__Array.h>
#include <Modloader/app/structs/Graphic__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Graphic__Array {
        inline app::Graphic__Array__Class** type_info() {
            static app::Graphic__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Graphic__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Graphic__Array__Class* get_class() {
            return il2cpp::get_class<app::Graphic__Array__Class>(type_info(), "UnityEngine.UI", "Graphic[]");
        }
        inline app::Graphic__Array* create() {
            return il2cpp::create_object<app::Graphic__Array>(get_class());
        }
    } // namespace Graphic__Array
} // namespace app::classes::types
