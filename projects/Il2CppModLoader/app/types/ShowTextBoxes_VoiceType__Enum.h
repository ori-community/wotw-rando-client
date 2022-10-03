#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowTextBoxes_VoiceType__Enum {
        namespace {
            app::ShowTextBoxes_VoiceType__Enum__Class* type_info_ref = nullptr;
        }
        app::ShowTextBoxes_VoiceType__Enum__Class** type_info = &type_info_ref;
        inline app::ShowTextBoxes_VoiceType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ShowTextBoxes_VoiceType__Enum__Class>(type_info, "", "ShowTextBoxes", "VoiceType");
        }
        inline app::ShowTextBoxes_VoiceType__Enum* create() {
            return il2cpp::create_object<app::ShowTextBoxes_VoiceType__Enum>(get_class());
        }
    } // namespace ShowTextBoxes_VoiceType__Enum
} // namespace app::classes::types
