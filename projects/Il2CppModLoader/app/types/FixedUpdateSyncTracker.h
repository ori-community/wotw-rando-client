#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FixedUpdateSyncTracker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FixedUpdateSyncTracker__Class** type_info;
        inline app::FixedUpdateSyncTracker__Class* get_class() {
            return il2cpp::get_class<app::FixedUpdateSyncTracker__Class>(type_info, "", "FixedUpdateSyncTracker");
        }
        inline app::FixedUpdateSyncTracker* create() {
            return il2cpp::create_object<app::FixedUpdateSyncTracker>(get_class());
        }
    } // namespace FixedUpdateSyncTracker
} // namespace app::classes::types
