#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioRolloffMode__Enum {
        namespace {
            app::AudioRolloffMode__Enum__Class* type_info_ref = nullptr;
        }
        app::AudioRolloffMode__Enum__Class** type_info = &type_info_ref;
        inline app::AudioRolloffMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::AudioRolloffMode__Enum__Class>(type_info, "UnityEngine", "AudioRolloffMode");
        }
        inline app::AudioRolloffMode__Enum* create() {
            return il2cpp::create_object<app::AudioRolloffMode__Enum>(get_class());
        }
    } // namespace AudioRolloffMode__Enum
} // namespace app::classes::types
