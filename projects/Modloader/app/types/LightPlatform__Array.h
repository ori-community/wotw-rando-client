#pragma once
#include <Modloader/app/structs/LightPlatform__Array.h>
#include <Modloader/app/structs/LightPlatform__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightPlatform__Array {
        inline app::LightPlatform__Array__Class** type_info() {
            static app::LightPlatform__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightPlatform__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightPlatform__Array__Class* get_class() {
            return il2cpp::get_class<app::LightPlatform__Array__Class>(type_info(), "", "LightPlatform[]");
        }
        inline app::LightPlatform__Array* create() {
            return il2cpp::create_object<app::LightPlatform__Array>(get_class());
        }
    } // namespace LightPlatform__Array
} // namespace app::classes::types
