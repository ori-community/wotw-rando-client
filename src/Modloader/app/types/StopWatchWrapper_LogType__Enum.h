#pragma once
#include <Modloader/app/structs/StopWatchWrapper_LogType__Enum.h>
#include <Modloader/app/structs/StopWatchWrapper_LogType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StopWatchWrapper_LogType__Enum {
        inline app::StopWatchWrapper_LogType__Enum__Class** type_info() {
            static app::StopWatchWrapper_LogType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StopWatchWrapper_LogType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StopWatchWrapper_LogType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StopWatchWrapper_LogType__Enum__Class>(type_info(), "", "StopWatchWrapper", "LogType");
        }
        inline app::StopWatchWrapper_LogType__Enum* create() {
            return il2cpp::create_object<app::StopWatchWrapper_LogType__Enum>(get_class());
        }
    } // namespace StopWatchWrapper_LogType__Enum
} // namespace app::classes::types
