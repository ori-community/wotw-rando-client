#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Measurement {
        namespace {
            app::Measurement__Class* type_info_ref = nullptr;
        }
        app::Measurement__Class** type_info = &type_info_ref;
        inline app::Measurement__Class* get_class() {
            return il2cpp::get_class<app::Measurement__Class>(type_info, "Moon.ContinuousIntegration", "Measurement");
        }
        inline app::Measurement* create() {
            return il2cpp::create_object<app::Measurement>(get_class());
        }
    } // namespace Measurement
} // namespace app::classes::types
