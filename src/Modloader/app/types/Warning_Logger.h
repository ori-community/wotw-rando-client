#pragma once
#include <Modloader/app/structs/Warning_Logger.h>
#include <Modloader/app/structs/Warning_Logger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Warning_Logger {
        inline app::Warning_Logger__Class** type_info() {
            static app::Warning_Logger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Warning_Logger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Warning_Logger__Class* get_class() {
            return il2cpp::get_nested_class<app::Warning_Logger__Class>(type_info(), "RootMotion", "Warning", "Logger");
        }
        inline app::Warning_Logger* create() {
            return il2cpp::create_object<app::Warning_Logger>(get_class());
        }
    } // namespace Warning_Logger
} // namespace app::classes::types
