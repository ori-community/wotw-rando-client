#pragma once
#include <Modloader/app/structs/UberWaterControl__Array.h>
#include <Modloader/app/structs/UberWaterControl__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterControl__Array {
        inline app::UberWaterControl__Array__Class** type_info() {
            static app::UberWaterControl__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberWaterControl__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberWaterControl__Array__Class* get_class() {
            return il2cpp::get_class<app::UberWaterControl__Array__Class>(type_info(), "", "UberWaterControl[]");
        }
        inline app::UberWaterControl__Array* create() {
            return il2cpp::create_object<app::UberWaterControl__Array>(get_class());
        }
    } // namespace UberWaterControl__Array
} // namespace app::classes::types
