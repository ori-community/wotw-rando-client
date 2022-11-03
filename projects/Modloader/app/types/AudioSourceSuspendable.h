#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AudioSourceSuspendable {
        namespace {
            inline app::AudioSourceSuspendable__Class* type_info_ref = nullptr;
        }
        inline app::AudioSourceSuspendable__Class** type_info = &type_info_ref;
        inline app::AudioSourceSuspendable__Class* get_class() {
            return il2cpp::get_class<app::AudioSourceSuspendable__Class>(type_info, "", "AudioSourceSuspendable");
        }
        inline app::AudioSourceSuspendable* create() {
            return il2cpp::create_object<app::AudioSourceSuspendable>(get_class());
        }
    } // namespace AudioSourceSuspendable
} // namespace app::classes::types
