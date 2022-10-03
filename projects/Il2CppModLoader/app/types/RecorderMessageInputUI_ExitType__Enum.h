#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecorderMessageInputUI_ExitType__Enum {
        namespace {
            app::RecorderMessageInputUI_ExitType__Enum__Class* type_info_ref = nullptr;
        }
        app::RecorderMessageInputUI_ExitType__Enum__Class** type_info = &type_info_ref;
        inline app::RecorderMessageInputUI_ExitType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RecorderMessageInputUI_ExitType__Enum__Class>(type_info, "", "RecorderMessageInputUI", "ExitType");
        }
        inline app::RecorderMessageInputUI_ExitType__Enum* create() {
            return il2cpp::create_object<app::RecorderMessageInputUI_ExitType__Enum>(get_class());
        }
    } // namespace RecorderMessageInputUI_ExitType__Enum
} // namespace app::classes::types
