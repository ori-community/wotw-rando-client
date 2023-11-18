#pragma once
#include <Modloader/app/structs/SystemInfo.h>
#include <Modloader/app/structs/SystemInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SystemInfo {
        inline app::SystemInfo__Class** type_info() {
            static app::SystemInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SystemInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SystemInfo__Class* get_class() {
            return il2cpp::get_class<app::SystemInfo__Class>(type_info(), "UnityEngine", "SystemInfo");
        }
        inline app::SystemInfo* create() {
            return il2cpp::create_object<app::SystemInfo>(get_class());
        }
    } // namespace SystemInfo
} // namespace app::classes::types
