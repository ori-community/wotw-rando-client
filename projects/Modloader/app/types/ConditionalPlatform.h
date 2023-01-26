#pragma once
#include <Modloader/app/structs/ConditionalPlatform.h>
#include <Modloader/app/structs/ConditionalPlatform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConditionalPlatform {
        inline app::ConditionalPlatform__Class** type_info() {
            static app::ConditionalPlatform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConditionalPlatform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConditionalPlatform__Class* get_class() {
            return il2cpp::get_class<app::ConditionalPlatform__Class>(type_info(), "Moon", "ConditionalPlatform");
        }
        inline app::ConditionalPlatform* create() {
            return il2cpp::create_object<app::ConditionalPlatform>(get_class());
        }
    } // namespace ConditionalPlatform
} // namespace app::classes::types
