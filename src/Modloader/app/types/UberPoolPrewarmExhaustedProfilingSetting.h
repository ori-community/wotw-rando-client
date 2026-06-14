#pragma once
#include <Modloader/app/structs/UberPoolPrewarmExhaustedProfilingSetting.h>
#include <Modloader/app/structs/UberPoolPrewarmExhaustedProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPrewarmExhaustedProfilingSetting {
        inline app::UberPoolPrewarmExhaustedProfilingSetting__Class** type_info() {
            static app::UberPoolPrewarmExhaustedProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolPrewarmExhaustedProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolPrewarmExhaustedProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::UberPoolPrewarmExhaustedProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "UberPoolPrewarmExhaustedProfilingSetting");
        }
        inline app::UberPoolPrewarmExhaustedProfilingSetting* create() {
            return il2cpp::create_object<app::UberPoolPrewarmExhaustedProfilingSetting>(get_class());
        }
    } // namespace UberPoolPrewarmExhaustedProfilingSetting
} // namespace app::classes::types
