#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
