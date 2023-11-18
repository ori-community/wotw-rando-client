#pragma once
#include <Modloader/app/structs/ProcessInfo.h>
#include <Modloader/app/structs/ProcessInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProcessInfo {
        inline app::ProcessInfo__Class** type_info() {
            static app::ProcessInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProcessInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProcessInfo__Class* get_class() {
            return il2cpp::get_class<app::ProcessInfo__Class>(type_info(), "System.Diagnostics", "ProcessInfo");
        }
        inline app::ProcessInfo* create() {
            return il2cpp::create_object<app::ProcessInfo>(get_class());
        }
    } // namespace ProcessInfo
} // namespace app::classes::types
