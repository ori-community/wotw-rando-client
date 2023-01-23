#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AudioZoneShape2D__Enum__Class.h>
#include <Modloader/app/structs/AudioZoneShape2D__Enum.h>

namespace app::classes::types {
    namespace AudioZoneShape2D__Enum {
        namespace {
            inline app::AudioZoneShape2D__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AudioZoneShape2D__Enum__Class** type_info = &type_info_ref;
        inline app::AudioZoneShape2D__Enum__Class* get_class() {
            return il2cpp::get_class<app::AudioZoneShape2D__Enum__Class>(type_info, "", "AudioZoneShape2D");
        }
        inline app::AudioZoneShape2D__Enum* create() {
            return il2cpp::create_object<app::AudioZoneShape2D__Enum>(get_class());
        }
    } // namespace AudioZoneShape2D__Enum
} // namespace app::classes::types
