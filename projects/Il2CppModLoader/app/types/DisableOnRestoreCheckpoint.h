#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DisableOnRestoreCheckpoint {
        namespace {
            app::DisableOnRestoreCheckpoint__Class* type_info_ref = nullptr;
        }
        app::DisableOnRestoreCheckpoint__Class** type_info = &type_info_ref;
        inline app::DisableOnRestoreCheckpoint__Class* get_class() {
            return il2cpp::get_class<app::DisableOnRestoreCheckpoint__Class>(type_info, "", "DisableOnRestoreCheckpoint");
        }
        inline app::DisableOnRestoreCheckpoint* create() {
            return il2cpp::create_object<app::DisableOnRestoreCheckpoint>(get_class());
        }
    } // namespace DisableOnRestoreCheckpoint
} // namespace app::classes::types
