#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AbilityBasedSetting {
        inline app::AbilityBasedSetting__Class** type_info = (app::AbilityBasedSetting__Class**)(modloader::win::memory::resolve_rva(0x0471AF90));
        inline app::AbilityBasedSetting__Class* get_class() {
            return il2cpp::get_class<app::AbilityBasedSetting__Class>(type_info, "Moon", "AbilityBasedSetting");
        }
        inline app::AbilityBasedSetting* create() {
            return il2cpp::create_object<app::AbilityBasedSetting>(get_class());
        }
    } // namespace AbilityBasedSetting
} // namespace app::classes::types
