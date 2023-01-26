#pragma once
#include <Modloader/app/structs/AbilityBasedSetting.h>
#include <Modloader/app/structs/AbilityBasedSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AbilityBasedSetting {
        inline app::AbilityBasedSetting__Class** type_info() {
            static app::AbilityBasedSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AbilityBasedSetting__Class**)(modloader::win::memory::resolve_rva(0x0471AF90));
            }
            return cache;
        }
        inline app::AbilityBasedSetting__Class* get_class() {
            return il2cpp::get_class<app::AbilityBasedSetting__Class>(type_info(), "Moon", "AbilityBasedSetting");
        }
        inline app::AbilityBasedSetting* create() {
            return il2cpp::create_object<app::AbilityBasedSetting>(get_class());
        }
    } // namespace AbilityBasedSetting
} // namespace app::classes::types
