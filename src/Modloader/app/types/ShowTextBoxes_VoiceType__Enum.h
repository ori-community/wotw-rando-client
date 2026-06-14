#pragma once
#include <Modloader/app/structs/ShowTextBoxes_VoiceType__Enum.h>
#include <Modloader/app/structs/ShowTextBoxes_VoiceType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowTextBoxes_VoiceType__Enum {
        inline app::ShowTextBoxes_VoiceType__Enum__Class** type_info() {
            static app::ShowTextBoxes_VoiceType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowTextBoxes_VoiceType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowTextBoxes_VoiceType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ShowTextBoxes_VoiceType__Enum__Class>(type_info(), "", "ShowTextBoxes", "VoiceType");
        }
        inline app::ShowTextBoxes_VoiceType__Enum* create() {
            return il2cpp::create_object<app::ShowTextBoxes_VoiceType__Enum>(get_class());
        }
    } // namespace ShowTextBoxes_VoiceType__Enum
} // namespace app::classes::types
