#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WwiseSoundBankRefCountProfilingSetting {
        namespace {
            inline app::WwiseSoundBankRefCountProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::WwiseSoundBankRefCountProfilingSetting__Class** type_info = &type_info_ref;
        inline app::WwiseSoundBankRefCountProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::WwiseSoundBankRefCountProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "WwiseSoundBankRefCountProfilingSetting");
        }
        inline app::WwiseSoundBankRefCountProfilingSetting* create() {
            return il2cpp::create_object<app::WwiseSoundBankRefCountProfilingSetting>(get_class());
        }
    } // namespace WwiseSoundBankRefCountProfilingSetting
} // namespace app::classes::types
