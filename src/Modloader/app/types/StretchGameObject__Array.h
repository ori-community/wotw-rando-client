#pragma once
#include <Modloader/app/structs/StretchGameObject__Array.h>
#include <Modloader/app/structs/StretchGameObject__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StretchGameObject__Array {
        inline app::StretchGameObject__Array__Class** type_info() {
            static app::StretchGameObject__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StretchGameObject__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StretchGameObject__Array__Class* get_class() {
            return il2cpp::get_class<app::StretchGameObject__Array__Class>(type_info(), "", "StretchGameObject[]");
        }
        inline app::StretchGameObject__Array* create() {
            return il2cpp::create_object<app::StretchGameObject__Array>(get_class());
        }
    } // namespace StretchGameObject__Array
} // namespace app::classes::types
