#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Warning_Logger__Class.h>
#include <Modloader/app/structs/Warning_Logger.h>

namespace app::classes::types {
    namespace Warning_Logger {
        namespace {
            inline app::Warning_Logger__Class* type_info_ref = nullptr;
        }
        inline app::Warning_Logger__Class** type_info = &type_info_ref;
        inline app::Warning_Logger__Class* get_class() {
            return il2cpp::get_nested_class<app::Warning_Logger__Class>(type_info, "RootMotion", "Warning", "Logger");
        }
        inline app::Warning_Logger* create() {
            return il2cpp::create_object<app::Warning_Logger>(get_class());
        }
    } // namespace Warning_Logger
} // namespace app::classes::types
