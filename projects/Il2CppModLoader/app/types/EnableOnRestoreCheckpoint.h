#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnableOnRestoreCheckpoint {
        namespace {
            inline app::EnableOnRestoreCheckpoint__Class* type_info_ref = nullptr;
        }
        inline app::EnableOnRestoreCheckpoint__Class** type_info = &type_info_ref;
        inline app::EnableOnRestoreCheckpoint__Class* get_class() {
            return il2cpp::get_class<app::EnableOnRestoreCheckpoint__Class>(type_info, "", "EnableOnRestoreCheckpoint");
        }
        inline app::EnableOnRestoreCheckpoint* create() {
            return il2cpp::create_object<app::EnableOnRestoreCheckpoint>(get_class());
        }
    } // namespace EnableOnRestoreCheckpoint
} // namespace app::classes::types
