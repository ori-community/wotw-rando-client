#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EarlyUpdate_PlayerCleanupCachedData {
        namespace {
            inline app::EarlyUpdate_PlayerCleanupCachedData__Class* type_info_ref = nullptr;
        }
        inline app::EarlyUpdate_PlayerCleanupCachedData__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_PlayerCleanupCachedData__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_PlayerCleanupCachedData__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "PlayerCleanupCachedData");
        }
        inline app::EarlyUpdate_PlayerCleanupCachedData* create() {
            return il2cpp::create_object<app::EarlyUpdate_PlayerCleanupCachedData>(get_class());
        }
        inline app::EarlyUpdate_PlayerCleanupCachedData__Boxed* box(app::EarlyUpdate_PlayerCleanupCachedData value) {
            return il2cpp::box_value<app::EarlyUpdate_PlayerCleanupCachedData__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_PlayerCleanupCachedData
} // namespace app::classes::types
