#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnableOnRestoreCheckpoint__Class.h>
#include <Modloader/app/structs/EnableOnRestoreCheckpoint.h>

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
