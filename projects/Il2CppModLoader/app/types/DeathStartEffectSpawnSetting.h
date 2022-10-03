#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeathStartEffectSpawnSetting {
        namespace {
            app::DeathStartEffectSpawnSetting__Class* type_info_ref = nullptr;
        }
        app::DeathStartEffectSpawnSetting__Class** type_info = &type_info_ref;
        inline app::DeathStartEffectSpawnSetting__Class* get_class() {
            return il2cpp::get_class<app::DeathStartEffectSpawnSetting__Class>(type_info, "", "DeathStartEffectSpawnSetting");
        }
        inline app::DeathStartEffectSpawnSetting* create() {
            return il2cpp::create_object<app::DeathStartEffectSpawnSetting>(get_class());
        }
    } // namespace DeathStartEffectSpawnSetting
} // namespace app::classes::types
