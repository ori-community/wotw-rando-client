#pragma once
#include <Modloader/app/structs/LevelType__Enum.h>
#include <Modloader/app/structs/LevelType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LevelType__Enum {
        inline app::LevelType__Enum__Class** type_info() {
            static app::LevelType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LevelType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LevelType__Enum__Class* get_class() {
            return il2cpp::get_class<app::LevelType__Enum__Class>(type_info(), "Moon.Telemetry", "LevelType");
        }
        inline app::LevelType__Enum* create() {
            return il2cpp::create_object<app::LevelType__Enum>(get_class());
        }
    } // namespace LevelType__Enum
} // namespace app::classes::types
