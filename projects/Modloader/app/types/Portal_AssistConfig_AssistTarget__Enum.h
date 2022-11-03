#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Portal_AssistConfig_AssistTarget__Enum {
        namespace {
            inline app::Portal_AssistConfig_AssistTarget__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Portal_AssistConfig_AssistTarget__Enum__Class** type_info = &type_info_ref;
        inline app::Portal_AssistConfig_AssistTarget__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Portal_AssistConfig_AssistTarget__Enum__Class>(type_info, "", "Portal+AssistConfig", "AssistTarget");
        }
        inline app::Portal_AssistConfig_AssistTarget__Enum* create() {
            return il2cpp::create_object<app::Portal_AssistConfig_AssistTarget__Enum>(get_class());
        }
    } // namespace Portal_AssistConfig_AssistTarget__Enum
} // namespace app::classes::types
