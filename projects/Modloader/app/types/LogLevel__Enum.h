#pragma once
#include <Modloader/app/structs/LogLevel__Enum.h>
#include <Modloader/app/structs/LogLevel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LogLevel__Enum {
        inline app::LogLevel__Enum__Class** type_info() {
            static app::LogLevel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LogLevel__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LogLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::LogLevel__Enum__Class>(type_info(), "TriangleNet.Logging", "LogLevel");
        }
        inline app::LogLevel__Enum* create() {
            return il2cpp::create_object<app::LogLevel__Enum>(get_class());
        }
    } // namespace LogLevel__Enum
} // namespace app::classes::types
