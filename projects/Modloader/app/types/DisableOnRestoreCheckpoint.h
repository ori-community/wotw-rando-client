#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DisableOnRestoreCheckpoint {
        namespace {
            inline app::DisableOnRestoreCheckpoint__Class* type_info_ref = nullptr;
        }
        inline app::DisableOnRestoreCheckpoint__Class** type_info = &type_info_ref;
        inline app::DisableOnRestoreCheckpoint__Class* get_class() {
            return il2cpp::get_class<app::DisableOnRestoreCheckpoint__Class>(type_info, "", "DisableOnRestoreCheckpoint");
        }
        inline app::DisableOnRestoreCheckpoint* create() {
            return il2cpp::create_object<app::DisableOnRestoreCheckpoint>(get_class());
        }
    } // namespace DisableOnRestoreCheckpoint
} // namespace app::classes::types
