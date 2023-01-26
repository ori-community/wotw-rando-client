#pragma once
#include <Modloader/app/structs/Portal_AssistConfig_AssistTarget__Enum.h>
#include <Modloader/app/structs/Portal_AssistConfig_AssistTarget__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Portal_AssistConfig_AssistTarget__Enum {
        inline app::Portal_AssistConfig_AssistTarget__Enum__Class** type_info() {
            static app::Portal_AssistConfig_AssistTarget__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Portal_AssistConfig_AssistTarget__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Portal_AssistConfig_AssistTarget__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Portal_AssistConfig_AssistTarget__Enum__Class>(type_info(), "", "Portal+AssistConfig", "AssistTarget");
        }
        inline app::Portal_AssistConfig_AssistTarget__Enum* create() {
            return il2cpp::create_object<app::Portal_AssistConfig_AssistTarget__Enum>(get_class());
        }
    } // namespace Portal_AssistConfig_AssistTarget__Enum
} // namespace app::classes::types
