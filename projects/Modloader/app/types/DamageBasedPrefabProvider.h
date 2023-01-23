#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DamageBasedPrefabProvider__Class.h>
#include <Modloader/app/structs/DamageBasedPrefabProvider.h>

namespace app::classes::types {
    namespace DamageBasedPrefabProvider {
        namespace {
            inline app::DamageBasedPrefabProvider__Class* type_info_ref = nullptr;
        }
        inline app::DamageBasedPrefabProvider__Class** type_info = &type_info_ref;
        inline app::DamageBasedPrefabProvider__Class* get_class() {
            return il2cpp::get_class<app::DamageBasedPrefabProvider__Class>(type_info, "", "DamageBasedPrefabProvider");
        }
        inline app::DamageBasedPrefabProvider* create() {
            return il2cpp::create_object<app::DamageBasedPrefabProvider>(get_class());
        }
    } // namespace DamageBasedPrefabProvider
} // namespace app::classes::types
