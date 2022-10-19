#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LevelType__Enum {
        namespace {
            inline app::LevelType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LevelType__Enum__Class** type_info = &type_info_ref;
        inline app::LevelType__Enum__Class* get_class() {
            return il2cpp::get_class<app::LevelType__Enum__Class>(type_info, "Moon.Telemetry", "LevelType");
        }
        inline app::LevelType__Enum* create() {
            return il2cpp::create_object<app::LevelType__Enum>(get_class());
        }
    } // namespace LevelType__Enum
} // namespace app::classes::types
