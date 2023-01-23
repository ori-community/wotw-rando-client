#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StatSetting_StatSource__Enum__Class.h>
#include <Modloader/app/structs/StatSetting_StatSource__Enum.h>

namespace app::classes::types {
    namespace StatSetting_StatSource__Enum {
        namespace {
            inline app::StatSetting_StatSource__Enum__Class* type_info_ref = nullptr;
        }
        inline app::StatSetting_StatSource__Enum__Class** type_info = &type_info_ref;
        inline app::StatSetting_StatSource__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StatSetting_StatSource__Enum__Class>(type_info, "", "StatSetting", "StatSource");
        }
        inline app::StatSetting_StatSource__Enum* create() {
            return il2cpp::create_object<app::StatSetting_StatSource__Enum>(get_class());
        }
    } // namespace StatSetting_StatSource__Enum
} // namespace app::classes::types
