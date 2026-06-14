#pragma once
#include <Modloader/app/structs/SpeedBasedEmissionRateMultiplier.h>
#include <Modloader/app/structs/SpeedBasedEmissionRateMultiplier__Array.h>
#include <Modloader/app/structs/SpeedBasedEmissionRateMultiplier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpeedBasedEmissionRateMultiplier {
        inline app::SpeedBasedEmissionRateMultiplier__Class** type_info() {
            static app::SpeedBasedEmissionRateMultiplier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpeedBasedEmissionRateMultiplier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpeedBasedEmissionRateMultiplier__Class* get_class() {
            return il2cpp::get_class<app::SpeedBasedEmissionRateMultiplier__Class>(type_info(), "", "SpeedBasedEmissionRateMultiplier");
        }
        inline app::SpeedBasedEmissionRateMultiplier* create() {
            return il2cpp::create_object<app::SpeedBasedEmissionRateMultiplier>(get_class());
        }
        inline app::SpeedBasedEmissionRateMultiplier__Array* create_array(int size) {
            return il2cpp::array_new<app::SpeedBasedEmissionRateMultiplier__Array>(get_class(), size);
        }
        inline app::SpeedBasedEmissionRateMultiplier__Array* create_array(const std::vector<app::SpeedBasedEmissionRateMultiplier*>& items) {
            return il2cpp::array_new<app::SpeedBasedEmissionRateMultiplier__Array>(get_class(), items);
        }
    } // namespace SpeedBasedEmissionRateMultiplier
} // namespace app::classes::types
