#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioZoneShape__Enum {
        namespace {
            app::AudioZoneShape__Enum__Class* type_info_ref = nullptr;
        }
        app::AudioZoneShape__Enum__Class** type_info = &type_info_ref;
        inline app::AudioZoneShape__Enum__Class* get_class() {
            return il2cpp::get_class<app::AudioZoneShape__Enum__Class>(type_info, "Moon.Wwise", "AudioZoneShape");
        }
        inline app::AudioZoneShape__Enum* create() {
            return il2cpp::create_object<app::AudioZoneShape__Enum>(get_class());
        }
    } // namespace AudioZoneShape__Enum
} // namespace app::classes::types
