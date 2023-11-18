#pragma once
#include <Modloader/app/structs/EnableOnRestoreCheckpoint.h>
#include <Modloader/app/structs/EnableOnRestoreCheckpoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnableOnRestoreCheckpoint {
        inline app::EnableOnRestoreCheckpoint__Class** type_info() {
            static app::EnableOnRestoreCheckpoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnableOnRestoreCheckpoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnableOnRestoreCheckpoint__Class* get_class() {
            return il2cpp::get_class<app::EnableOnRestoreCheckpoint__Class>(type_info(), "", "EnableOnRestoreCheckpoint");
        }
        inline app::EnableOnRestoreCheckpoint* create() {
            return il2cpp::create_object<app::EnableOnRestoreCheckpoint>(get_class());
        }
    } // namespace EnableOnRestoreCheckpoint
} // namespace app::classes::types
