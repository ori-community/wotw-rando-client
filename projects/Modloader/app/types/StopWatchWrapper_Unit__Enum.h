#pragma once
#include <Modloader/app/structs/StopWatchWrapper_Unit__Enum.h>
#include <Modloader/app/structs/StopWatchWrapper_Unit__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StopWatchWrapper_Unit__Enum {
        inline app::StopWatchWrapper_Unit__Enum__Class** type_info() {
            static app::StopWatchWrapper_Unit__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StopWatchWrapper_Unit__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StopWatchWrapper_Unit__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StopWatchWrapper_Unit__Enum__Class>(type_info(), "", "StopWatchWrapper", "Unit");
        }
        inline app::StopWatchWrapper_Unit__Enum* create() {
            return il2cpp::create_object<app::StopWatchWrapper_Unit__Enum>(get_class());
        }
    } // namespace StopWatchWrapper_Unit__Enum
} // namespace app::classes::types
