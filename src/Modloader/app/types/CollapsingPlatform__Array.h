#pragma once
#include <Modloader/app/structs/CollapsingPlatform__Array.h>
#include <Modloader/app/structs/CollapsingPlatform__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollapsingPlatform__Array {
        inline app::CollapsingPlatform__Array__Class** type_info() {
            static app::CollapsingPlatform__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollapsingPlatform__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollapsingPlatform__Array__Class* get_class() {
            return il2cpp::get_class<app::CollapsingPlatform__Array__Class>(type_info(), "", "CollapsingPlatform[]");
        }
        inline app::CollapsingPlatform__Array* create() {
            return il2cpp::create_object<app::CollapsingPlatform__Array>(get_class());
        }
    } // namespace CollapsingPlatform__Array
} // namespace app::classes::types
