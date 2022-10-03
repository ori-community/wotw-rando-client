#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkSpeakerPanningType__Enum {
        namespace {
            app::AkSpeakerPanningType__Enum__Class* type_info_ref = nullptr;
        }
        app::AkSpeakerPanningType__Enum__Class** type_info = &type_info_ref;
        inline app::AkSpeakerPanningType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkSpeakerPanningType__Enum__Class>(type_info, "", "AkSpeakerPanningType");
        }
        inline app::AkSpeakerPanningType__Enum* create() {
            return il2cpp::create_object<app::AkSpeakerPanningType__Enum>(get_class());
        }
    } // namespace AkSpeakerPanningType__Enum
} // namespace app::classes::types
