#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnableOnRestoreCheckpoint {
        namespace {
            app::EnableOnRestoreCheckpoint__Class* type_info_ref = nullptr;
        }
        app::EnableOnRestoreCheckpoint__Class** type_info = &type_info_ref;
        inline app::EnableOnRestoreCheckpoint__Class* get_class() {
            return il2cpp::get_class<app::EnableOnRestoreCheckpoint__Class>(type_info, "", "EnableOnRestoreCheckpoint");
        }
        inline app::EnableOnRestoreCheckpoint* create() {
            return il2cpp::create_object<app::EnableOnRestoreCheckpoint>(get_class());
        }
    } // namespace EnableOnRestoreCheckpoint
} // namespace app::classes::types
