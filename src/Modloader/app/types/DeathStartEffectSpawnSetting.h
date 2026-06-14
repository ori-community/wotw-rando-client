#pragma once
#include <Modloader/app/structs/DeathStartEffectSpawnSetting.h>
#include <Modloader/app/structs/DeathStartEffectSpawnSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeathStartEffectSpawnSetting {
        inline app::DeathStartEffectSpawnSetting__Class** type_info() {
            static app::DeathStartEffectSpawnSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeathStartEffectSpawnSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeathStartEffectSpawnSetting__Class* get_class() {
            return il2cpp::get_class<app::DeathStartEffectSpawnSetting__Class>(type_info(), "", "DeathStartEffectSpawnSetting");
        }
        inline app::DeathStartEffectSpawnSetting* create() {
            return il2cpp::create_object<app::DeathStartEffectSpawnSetting>(get_class());
        }
    } // namespace DeathStartEffectSpawnSetting
} // namespace app::classes::types
