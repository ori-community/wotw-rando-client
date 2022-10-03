#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpeedBasedEmissionRateMultiplier__Array {
        namespace {
            app::SpeedBasedEmissionRateMultiplier__Array__Class* type_info_ref = nullptr;
        }
        app::SpeedBasedEmissionRateMultiplier__Array__Class** type_info = &type_info_ref;
        inline app::SpeedBasedEmissionRateMultiplier__Array__Class* get_class() {
            return il2cpp::get_class<app::SpeedBasedEmissionRateMultiplier__Array__Class>(type_info, "", "SpeedBasedEmissionRateMultiplier[]");
        }
        inline app::SpeedBasedEmissionRateMultiplier__Array* create() {
            return il2cpp::create_object<app::SpeedBasedEmissionRateMultiplier__Array>(get_class());
        }
    } // namespace SpeedBasedEmissionRateMultiplier__Array
} // namespace app::classes::types
