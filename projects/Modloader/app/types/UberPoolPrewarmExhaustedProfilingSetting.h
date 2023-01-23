#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPoolPrewarmExhaustedProfilingSetting__Class.h>
#include <Modloader/app/structs/UberPoolPrewarmExhaustedProfilingSetting.h>

namespace app::classes::types {
    namespace UberPoolPrewarmExhaustedProfilingSetting {
        namespace {
            inline app::UberPoolPrewarmExhaustedProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::UberPoolPrewarmExhaustedProfilingSetting__Class** type_info = &type_info_ref;
        inline app::UberPoolPrewarmExhaustedProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::UberPoolPrewarmExhaustedProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "UberPoolPrewarmExhaustedProfilingSetting");
        }
        inline app::UberPoolPrewarmExhaustedProfilingSetting* create() {
            return il2cpp::create_object<app::UberPoolPrewarmExhaustedProfilingSetting>(get_class());
        }
    } // namespace UberPoolPrewarmExhaustedProfilingSetting
} // namespace app::classes::types
