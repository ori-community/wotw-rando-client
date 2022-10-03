#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StressTester_TesterState__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StressTester_TesterState__Enum__Class** type_info;
        inline app::StressTester_TesterState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StressTester_TesterState__Enum__Class>(type_info, "", "StressTester", "TesterState");
        }
        inline app::StressTester_TesterState__Enum* create() {
            return il2cpp::create_object<app::StressTester_TesterState__Enum>(get_class());
        }
    } // namespace StressTester_TesterState__Enum
} // namespace app::classes::types
