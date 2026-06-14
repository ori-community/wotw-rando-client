#pragma once
#include <Modloader/app/structs/Bounds__Array.h>
#include <Modloader/app/structs/Bounds__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Bounds__Array {
        inline app::Bounds__Array__Class** type_info() {
            static app::Bounds__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Bounds__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Bounds__Array__Class* get_class() {
            return il2cpp::get_class<app::Bounds__Array__Class>(type_info(), "UnityEngine", "Bounds[]");
        }
        inline app::Bounds__Array* create() {
            return il2cpp::create_object<app::Bounds__Array>(get_class());
        }
    } // namespace Bounds__Array
} // namespace app::classes::types
