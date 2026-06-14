#pragma once
#include <Modloader/app/structs/RecorderMessageInputUI_ExitType__Enum.h>
#include <Modloader/app/structs/RecorderMessageInputUI_ExitType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecorderMessageInputUI_ExitType__Enum {
        inline app::RecorderMessageInputUI_ExitType__Enum__Class** type_info() {
            static app::RecorderMessageInputUI_ExitType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecorderMessageInputUI_ExitType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecorderMessageInputUI_ExitType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RecorderMessageInputUI_ExitType__Enum__Class>(type_info(), "", "RecorderMessageInputUI", "ExitType");
        }
        inline app::RecorderMessageInputUI_ExitType__Enum* create() {
            return il2cpp::create_object<app::RecorderMessageInputUI_ExitType__Enum>(get_class());
        }
    } // namespace RecorderMessageInputUI_ExitType__Enum
} // namespace app::classes::types
