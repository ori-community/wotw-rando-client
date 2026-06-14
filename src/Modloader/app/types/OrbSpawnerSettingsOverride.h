#pragma once
#include <Modloader/app/structs/OrbSpawnerSettingsOverride.h>
#include <Modloader/app/structs/OrbSpawnerSettingsOverride__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OrbSpawnerSettingsOverride {
        inline app::OrbSpawnerSettingsOverride__Class** type_info() {
            static app::OrbSpawnerSettingsOverride__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OrbSpawnerSettingsOverride__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OrbSpawnerSettingsOverride__Class* get_class() {
            return il2cpp::get_class<app::OrbSpawnerSettingsOverride__Class>(type_info(), "", "OrbSpawnerSettingsOverride");
        }
        inline app::OrbSpawnerSettingsOverride* create() {
            return il2cpp::create_object<app::OrbSpawnerSettingsOverride>(get_class());
        }
    } // namespace OrbSpawnerSettingsOverride
} // namespace app::classes::types
