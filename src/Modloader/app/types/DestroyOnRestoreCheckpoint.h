#pragma once
#include <Modloader/app/structs/DestroyOnRestoreCheckpoint.h>
#include <Modloader/app/structs/DestroyOnRestoreCheckpoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DestroyOnRestoreCheckpoint {
        inline app::DestroyOnRestoreCheckpoint__Class** type_info() {
            static app::DestroyOnRestoreCheckpoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DestroyOnRestoreCheckpoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DestroyOnRestoreCheckpoint__Class* get_class() {
            return il2cpp::get_class<app::DestroyOnRestoreCheckpoint__Class>(type_info(), "", "DestroyOnRestoreCheckpoint");
        }
        inline app::DestroyOnRestoreCheckpoint* create() {
            return il2cpp::create_object<app::DestroyOnRestoreCheckpoint>(get_class());
        }
    } // namespace DestroyOnRestoreCheckpoint
} // namespace app::classes::types
