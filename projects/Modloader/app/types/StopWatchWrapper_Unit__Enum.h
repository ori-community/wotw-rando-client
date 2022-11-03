#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StopWatchWrapper_Unit__Enum {
        namespace {
            inline app::StopWatchWrapper_Unit__Enum__Class* type_info_ref = nullptr;
        }
        inline app::StopWatchWrapper_Unit__Enum__Class** type_info = &type_info_ref;
        inline app::StopWatchWrapper_Unit__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StopWatchWrapper_Unit__Enum__Class>(type_info, "", "StopWatchWrapper", "Unit");
        }
        inline app::StopWatchWrapper_Unit__Enum* create() {
            return il2cpp::create_object<app::StopWatchWrapper_Unit__Enum>(get_class());
        }
    } // namespace StopWatchWrapper_Unit__Enum
} // namespace app::classes::types
