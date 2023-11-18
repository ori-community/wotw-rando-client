#pragma once
#include <Modloader/app/structs/LegacyAnimatorRestartOnRestoreCheckpoint.h>
#include <Modloader/app/structs/LegacyAnimatorRestartOnRestoreCheckpoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyAnimatorRestartOnRestoreCheckpoint {
        inline app::LegacyAnimatorRestartOnRestoreCheckpoint__Class** type_info() {
            static app::LegacyAnimatorRestartOnRestoreCheckpoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyAnimatorRestartOnRestoreCheckpoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyAnimatorRestartOnRestoreCheckpoint__Class* get_class() {
            return il2cpp::get_class<app::LegacyAnimatorRestartOnRestoreCheckpoint__Class>(type_info(), "", "LegacyAnimatorRestartOnRestoreCheckpoint");
        }
        inline app::LegacyAnimatorRestartOnRestoreCheckpoint* create() {
            return il2cpp::create_object<app::LegacyAnimatorRestartOnRestoreCheckpoint>(get_class());
        }
    } // namespace LegacyAnimatorRestartOnRestoreCheckpoint
} // namespace app::classes::types
