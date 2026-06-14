#pragma once
#include <Modloader/app/structs/Selectable__Array.h>
#include <Modloader/app/structs/Selectable__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Selectable__Array {
        inline app::Selectable__Array__Class** type_info() {
            static app::Selectable__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Selectable__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Selectable__Array__Class* get_class() {
            return il2cpp::get_class<app::Selectable__Array__Class>(type_info(), "UnityEngine.UI", "Selectable[]");
        }
        inline app::Selectable__Array* create() {
            return il2cpp::create_object<app::Selectable__Array>(get_class());
        }
    } // namespace Selectable__Array
} // namespace app::classes::types
