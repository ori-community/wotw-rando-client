#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioSourceExtension__Array {
        namespace {
            app::AudioSourceExtension__Array__Class* type_info_ref = nullptr;
        }
        app::AudioSourceExtension__Array__Class** type_info = &type_info_ref;
        inline app::AudioSourceExtension__Array__Class* get_class() {
            return il2cpp::get_class<app::AudioSourceExtension__Array__Class>(type_info, "UnityEngine", "AudioSourceExtension[]");
        }
        inline app::AudioSourceExtension__Array* create() {
            return il2cpp::create_object<app::AudioSourceExtension__Array>(get_class());
        }
    } // namespace AudioSourceExtension__Array
} // namespace app::classes::types
