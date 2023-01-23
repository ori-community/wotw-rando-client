#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LogType__Enum__Class.h>
#include <Modloader/app/structs/LogType__Enum.h>

namespace app::classes::types {
    namespace LogType__Enum {
        inline app::LogType__Enum__Class** type_info = (app::LogType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04702988));
        inline app::LogType__Enum__Class* get_class() {
            return il2cpp::get_class<app::LogType__Enum__Class>(type_info, "UnityEngine", "LogType");
        }
        inline app::LogType__Enum* create() {
            return il2cpp::create_object<app::LogType__Enum>(get_class());
        }
    } // namespace LogType__Enum
} // namespace app::classes::types
