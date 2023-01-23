#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Glitch_TearingSettings__Class.h>
#include <Modloader/app/structs/Glitch_TearingSettings.h>

namespace app::classes::types {
    namespace Glitch_TearingSettings {
        inline app::Glitch_TearingSettings__Class** type_info = (app::Glitch_TearingSettings__Class**)(modloader::win::memory::resolve_rva(0x04709CA0));
        inline app::Glitch_TearingSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::Glitch_TearingSettings__Class>(type_info, "Colorful", "Glitch", "TearingSettings");
        }
        inline app::Glitch_TearingSettings* create() {
            return il2cpp::create_object<app::Glitch_TearingSettings>(get_class());
        }
    } // namespace Glitch_TearingSettings
} // namespace app::classes::types
