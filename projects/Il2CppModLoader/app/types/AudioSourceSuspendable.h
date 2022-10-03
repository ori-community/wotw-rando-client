#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioSourceSuspendable {
        namespace {
            app::AudioSourceSuspendable__Class* type_info_ref = nullptr;
        }
        app::AudioSourceSuspendable__Class** type_info = &type_info_ref;
        inline app::AudioSourceSuspendable__Class* get_class() {
            return il2cpp::get_class<app::AudioSourceSuspendable__Class>(type_info, "", "AudioSourceSuspendable");
        }
        inline app::AudioSourceSuspendable* create() {
            return il2cpp::create_object<app::AudioSourceSuspendable>(get_class());
        }
    } // namespace AudioSourceSuspendable
} // namespace app::classes::types
