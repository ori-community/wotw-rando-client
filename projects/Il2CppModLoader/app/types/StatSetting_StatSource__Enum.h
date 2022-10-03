#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatSetting_StatSource__Enum {
        namespace {
            app::StatSetting_StatSource__Enum__Class* type_info_ref = nullptr;
        }
        app::StatSetting_StatSource__Enum__Class** type_info = &type_info_ref;
        inline app::StatSetting_StatSource__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StatSetting_StatSource__Enum__Class>(type_info, "", "StatSetting", "StatSource");
        }
        inline app::StatSetting_StatSource__Enum* create() {
            return il2cpp::create_object<app::StatSetting_StatSource__Enum>(get_class());
        }
    } // namespace StatSetting_StatSource__Enum
} // namespace app::classes::types
