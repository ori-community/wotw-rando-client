#pragma once
#include <Modloader/app/structs/AudioZoneShape2D__Enum.h>
#include <Modloader/app/structs/AudioZoneShape2D__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioZoneShape2D__Enum {
        inline app::AudioZoneShape2D__Enum__Class** type_info() {
            static app::AudioZoneShape2D__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioZoneShape2D__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioZoneShape2D__Enum__Class* get_class() {
            return il2cpp::get_class<app::AudioZoneShape2D__Enum__Class>(type_info(), "", "AudioZoneShape2D");
        }
        inline app::AudioZoneShape2D__Enum* create() {
            return il2cpp::create_object<app::AudioZoneShape2D__Enum>(get_class());
        }
    } // namespace AudioZoneShape2D__Enum
} // namespace app::classes::types
