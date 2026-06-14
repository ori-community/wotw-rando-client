#pragma once
#include <Modloader/app/structs/AkSpeakerPanningType__Enum.h>
#include <Modloader/app/structs/AkSpeakerPanningType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkSpeakerPanningType__Enum {
        inline app::AkSpeakerPanningType__Enum__Class** type_info() {
            static app::AkSpeakerPanningType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkSpeakerPanningType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkSpeakerPanningType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkSpeakerPanningType__Enum__Class>(type_info(), "", "AkSpeakerPanningType");
        }
        inline app::AkSpeakerPanningType__Enum* create() {
            return il2cpp::create_object<app::AkSpeakerPanningType__Enum>(get_class());
        }
    } // namespace AkSpeakerPanningType__Enum
} // namespace app::classes::types
