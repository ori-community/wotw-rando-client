#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StatSetting_StatFormat__Enum {
        namespace {
            inline app::StatSetting_StatFormat__Enum__Class* type_info_ref = nullptr;
        }
        inline app::StatSetting_StatFormat__Enum__Class** type_info = &type_info_ref;
        inline app::StatSetting_StatFormat__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StatSetting_StatFormat__Enum__Class>(type_info, "", "StatSetting", "StatFormat");
        }
        inline app::StatSetting_StatFormat__Enum* create() {
            return il2cpp::create_object<app::StatSetting_StatFormat__Enum>(get_class());
        }
    } // namespace StatSetting_StatFormat__Enum
} // namespace app::classes::types
