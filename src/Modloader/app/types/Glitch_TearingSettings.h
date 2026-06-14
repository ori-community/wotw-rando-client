#pragma once
#include <Modloader/app/structs/Glitch_TearingSettings.h>
#include <Modloader/app/structs/Glitch_TearingSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Glitch_TearingSettings {
        inline app::Glitch_TearingSettings__Class** type_info() {
            static app::Glitch_TearingSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Glitch_TearingSettings__Class**)(modloader::win::memory::resolve_rva(0x04709CA0));
            }
            return cache;
        }
        inline app::Glitch_TearingSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::Glitch_TearingSettings__Class>(type_info(), "Colorful", "Glitch", "TearingSettings");
        }
        inline app::Glitch_TearingSettings* create() {
            return il2cpp::create_object<app::Glitch_TearingSettings>(get_class());
        }
    } // namespace Glitch_TearingSettings
} // namespace app::classes::types
