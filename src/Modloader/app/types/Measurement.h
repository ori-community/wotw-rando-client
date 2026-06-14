#pragma once
#include <Modloader/app/structs/Measurement.h>
#include <Modloader/app/structs/Measurement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Measurement {
        inline app::Measurement__Class** type_info() {
            static app::Measurement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Measurement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Measurement__Class* get_class() {
            return il2cpp::get_class<app::Measurement__Class>(type_info(), "Moon.ContinuousIntegration", "Measurement");
        }
        inline app::Measurement* create() {
            return il2cpp::create_object<app::Measurement>(get_class());
        }
    } // namespace Measurement
} // namespace app::classes::types
