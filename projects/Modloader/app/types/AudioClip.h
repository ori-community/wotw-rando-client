#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AudioClip__Class.h>
#include <Modloader/app/structs/AudioClip.h>
#include <Modloader/app/structs/AudioClip__Array.h>

namespace app::classes::types {
    namespace AudioClip {
        inline app::AudioClip__Class** type_info = (app::AudioClip__Class**)(modloader::win::memory::resolve_rva(0x04781FD8));
        inline app::AudioClip__Class* get_class() {
            return il2cpp::get_class<app::AudioClip__Class>(type_info, "UnityEngine", "AudioClip");
        }
        inline app::AudioClip* create() {
            return il2cpp::create_object<app::AudioClip>(get_class());
        }
        inline app::AudioClip__Array* create_array(int size) {
            return il2cpp::array_new<app::AudioClip__Array>(get_class(), size);
        }
        inline app::AudioClip__Array* create_array(const std::vector<app::AudioClip*>& items) {
            return il2cpp::array_new<app::AudioClip__Array>(get_class(), items);
        }
    } // namespace AudioClip
} // namespace app::classes::types
