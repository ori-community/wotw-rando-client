#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioClip__Array {
        namespace {
            app::AudioClip__Array__Class* type_info_ref = nullptr;
        }
        app::AudioClip__Array__Class** type_info = &type_info_ref;
        inline app::AudioClip__Array__Class* get_class() {
            return il2cpp::get_class<app::AudioClip__Array__Class>(type_info, "UnityEngine", "AudioClip[]");
        }
        inline app::AudioClip__Array* create() {
            return il2cpp::create_object<app::AudioClip__Array>(get_class());
        }
    } // namespace AudioClip__Array
} // namespace app::classes::types
