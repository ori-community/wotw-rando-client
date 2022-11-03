#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OrbSpawnerSettingsOverride {
        namespace {
            inline app::OrbSpawnerSettingsOverride__Class* type_info_ref = nullptr;
        }
        inline app::OrbSpawnerSettingsOverride__Class** type_info = &type_info_ref;
        inline app::OrbSpawnerSettingsOverride__Class* get_class() {
            return il2cpp::get_class<app::OrbSpawnerSettingsOverride__Class>(type_info, "", "OrbSpawnerSettingsOverride");
        }
        inline app::OrbSpawnerSettingsOverride* create() {
            return il2cpp::create_object<app::OrbSpawnerSettingsOverride>(get_class());
        }
    } // namespace OrbSpawnerSettingsOverride
} // namespace app::classes::types
