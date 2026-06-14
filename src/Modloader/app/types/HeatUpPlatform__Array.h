#pragma once
#include <Modloader/app/structs/HeatUpPlatform__Array.h>
#include <Modloader/app/structs/HeatUpPlatform__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HeatUpPlatform__Array {
        inline app::HeatUpPlatform__Array__Class** type_info() {
            static app::HeatUpPlatform__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HeatUpPlatform__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HeatUpPlatform__Array__Class* get_class() {
            return il2cpp::get_class<app::HeatUpPlatform__Array__Class>(type_info(), "", "HeatUpPlatform[]");
        }
        inline app::HeatUpPlatform__Array* create() {
            return il2cpp::create_object<app::HeatUpPlatform__Array>(get_class());
        }
    } // namespace HeatUpPlatform__Array
} // namespace app::classes::types
