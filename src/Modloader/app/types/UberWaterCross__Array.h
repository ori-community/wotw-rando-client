#pragma once
#include <Modloader/app/structs/UberWaterCross__Array.h>
#include <Modloader/app/structs/UberWaterCross__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterCross__Array {
        inline app::UberWaterCross__Array__Class** type_info() {
            static app::UberWaterCross__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberWaterCross__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberWaterCross__Array__Class* get_class() {
            return il2cpp::get_class<app::UberWaterCross__Array__Class>(type_info(), "", "UberWaterCross[]");
        }
        inline app::UberWaterCross__Array* create() {
            return il2cpp::create_object<app::UberWaterCross__Array>(get_class());
        }
    } // namespace UberWaterCross__Array
} // namespace app::classes::types
