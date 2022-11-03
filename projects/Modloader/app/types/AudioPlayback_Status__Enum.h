#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AudioPlayback_Status__Enum {
        namespace {
            inline app::AudioPlayback_Status__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AudioPlayback_Status__Enum__Class** type_info = &type_info_ref;
        inline app::AudioPlayback_Status__Enum__Class* get_class() {
            return il2cpp::get_class<app::AudioPlayback_Status__Enum__Class>(type_info, "Steamworks", "AudioPlayback_Status");
        }
        inline app::AudioPlayback_Status__Enum* create() {
            return il2cpp::create_object<app::AudioPlayback_Status__Enum>(get_class());
        }
    } // namespace AudioPlayback_Status__Enum
} // namespace app::classes::types
