#pragma once
#include <Modloader/app/structs/ScenarioRecorderState__Enum.h>
#include <Modloader/app/structs/ScenarioRecorderState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenarioRecorderState__Enum {
        inline app::ScenarioRecorderState__Enum__Class** type_info() {
            static app::ScenarioRecorderState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScenarioRecorderState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScenarioRecorderState__Enum__Class* get_class() {
            return il2cpp::get_class<app::ScenarioRecorderState__Enum__Class>(type_info(), "", "ScenarioRecorderState");
        }
        inline app::ScenarioRecorderState__Enum* create() {
            return il2cpp::create_object<app::ScenarioRecorderState__Enum>(get_class());
        }
    } // namespace ScenarioRecorderState__Enum
} // namespace app::classes::types
