#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LogItem__Array__Class.h>
#include <Modloader/app/structs/LogItem__Array.h>

namespace app::classes::types {
    namespace LogItem__Array {
        namespace {
            inline app::LogItem__Array__Class* type_info_ref = nullptr;
        }
        inline app::LogItem__Array__Class** type_info = &type_info_ref;
        inline app::LogItem__Array__Class* get_class() {
            return il2cpp::get_class<app::LogItem__Array__Class>(type_info, "TriangleNet.Logging", "LogItem[]");
        }
        inline app::LogItem__Array* create() {
            return il2cpp::create_object<app::LogItem__Array>(get_class());
        }
    } // namespace LogItem__Array
} // namespace app::classes::types
