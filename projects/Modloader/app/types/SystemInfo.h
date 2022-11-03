#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SystemInfo {
        namespace {
            inline app::SystemInfo__Class* type_info_ref = nullptr;
        }
        inline app::SystemInfo__Class** type_info = &type_info_ref;
        inline app::SystemInfo__Class* get_class() {
            return il2cpp::get_class<app::SystemInfo__Class>(type_info, "UnityEngine", "SystemInfo");
        }
        inline app::SystemInfo* create() {
            return il2cpp::create_object<app::SystemInfo>(get_class());
        }
    } // namespace SystemInfo
} // namespace app::classes::types
