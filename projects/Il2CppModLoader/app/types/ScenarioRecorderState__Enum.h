#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScenarioRecorderState__Enum {
        namespace {
            inline app::ScenarioRecorderState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ScenarioRecorderState__Enum__Class** type_info = &type_info_ref;
        inline app::ScenarioRecorderState__Enum__Class* get_class() {
            return il2cpp::get_class<app::ScenarioRecorderState__Enum__Class>(type_info, "", "ScenarioRecorderState");
        }
        inline app::ScenarioRecorderState__Enum* create() {
            return il2cpp::create_object<app::ScenarioRecorderState__Enum>(get_class());
        }
    } // namespace ScenarioRecorderState__Enum
} // namespace app::classes::types
