#pragma once
#include <Modloader/app/structs/Sprite__Array.h>
#include <Modloader/app/structs/Sprite__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Sprite__Array {
        inline app::Sprite__Array__Class** type_info() {
            static app::Sprite__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Sprite__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Sprite__Array__Class* get_class() {
            return il2cpp::get_class<app::Sprite__Array__Class>(type_info(), "UnityEngine", "Sprite[]");
        }
        inline app::Sprite__Array* create() {
            return il2cpp::create_object<app::Sprite__Array>(get_class());
        }
    } // namespace Sprite__Array
} // namespace app::classes::types
