#pragma once
#include <Modloader/app/structs/SpeedBasedEmissionRateMultiplier__Array.h>
#include <Modloader/app/structs/SpeedBasedEmissionRateMultiplier__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpeedBasedEmissionRateMultiplier__Array {
        inline app::SpeedBasedEmissionRateMultiplier__Array__Class** type_info() {
            static app::SpeedBasedEmissionRateMultiplier__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpeedBasedEmissionRateMultiplier__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpeedBasedEmissionRateMultiplier__Array__Class* get_class() {
            return il2cpp::get_class<app::SpeedBasedEmissionRateMultiplier__Array__Class>(type_info(), "", "SpeedBasedEmissionRateMultiplier[]");
        }
        inline app::SpeedBasedEmissionRateMultiplier__Array* create() {
            return il2cpp::create_object<app::SpeedBasedEmissionRateMultiplier__Array>(get_class());
        }
    } // namespace SpeedBasedEmissionRateMultiplier__Array
} // namespace app::classes::types
