#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpeedBasedEmissionRateMultiplier {
        namespace {
            inline app::SpeedBasedEmissionRateMultiplier__Class* type_info_ref = nullptr;
        }
        inline app::SpeedBasedEmissionRateMultiplier__Class** type_info = &type_info_ref;
        inline app::SpeedBasedEmissionRateMultiplier__Class* get_class() {
            return il2cpp::get_class<app::SpeedBasedEmissionRateMultiplier__Class>(type_info, "", "SpeedBasedEmissionRateMultiplier");
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
