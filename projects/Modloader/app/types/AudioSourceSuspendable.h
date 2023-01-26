#pragma once
#include <Modloader/app/structs/AudioSourceSuspendable.h>
#include <Modloader/app/structs/AudioSourceSuspendable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioSourceSuspendable {
        inline app::AudioSourceSuspendable__Class** type_info() {
            static app::AudioSourceSuspendable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioSourceSuspendable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioSourceSuspendable__Class* get_class() {
            return il2cpp::get_class<app::AudioSourceSuspendable__Class>(type_info(), "", "AudioSourceSuspendable");
        }
        inline app::AudioSourceSuspendable* create() {
            return il2cpp::create_object<app::AudioSourceSuspendable>(get_class());
        }
    } // namespace AudioSourceSuspendable
} // namespace app::classes::types
