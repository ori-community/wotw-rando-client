#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DestroyOnRestoreCheckpoint {
        namespace {
            app::DestroyOnRestoreCheckpoint__Class* type_info_ref = nullptr;
        }
        app::DestroyOnRestoreCheckpoint__Class** type_info = &type_info_ref;
        inline app::DestroyOnRestoreCheckpoint__Class* get_class() {
            return il2cpp::get_class<app::DestroyOnRestoreCheckpoint__Class>(type_info, "", "DestroyOnRestoreCheckpoint");
        }
        inline app::DestroyOnRestoreCheckpoint* create() {
            return il2cpp::create_object<app::DestroyOnRestoreCheckpoint>(get_class());
        }
    } // namespace DestroyOnRestoreCheckpoint
} // namespace app::classes::types
