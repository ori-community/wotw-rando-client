#pragma once
#include <Modloader/app/structs/LogItem__Array.h>
#include <Modloader/app/structs/LogItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LogItem__Array {
        inline app::LogItem__Array__Class** type_info() {
            static app::LogItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LogItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LogItem__Array__Class* get_class() {
            return il2cpp::get_class<app::LogItem__Array__Class>(type_info(), "TriangleNet.Logging", "LogItem[]");
        }
        inline app::LogItem__Array* create() {
            return il2cpp::create_object<app::LogItem__Array>(get_class());
        }
    } // namespace LogItem__Array
} // namespace app::classes::types
