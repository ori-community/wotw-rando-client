#pragma once
#include <Modloader/app/structs/DisableOnRestoreCheckpoint.h>
#include <Modloader/app/structs/DisableOnRestoreCheckpoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DisableOnRestoreCheckpoint {
        inline app::DisableOnRestoreCheckpoint__Class** type_info() {
            static app::DisableOnRestoreCheckpoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DisableOnRestoreCheckpoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DisableOnRestoreCheckpoint__Class* get_class() {
            return il2cpp::get_class<app::DisableOnRestoreCheckpoint__Class>(type_info(), "", "DisableOnRestoreCheckpoint");
        }
        inline app::DisableOnRestoreCheckpoint* create() {
            return il2cpp::create_object<app::DisableOnRestoreCheckpoint>(get_class());
        }
    } // namespace DisableOnRestoreCheckpoint
} // namespace app::classes::types
