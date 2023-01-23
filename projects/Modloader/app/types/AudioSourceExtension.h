#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AudioSourceExtension__Class.h>
#include <Modloader/app/structs/AudioSourceExtension.h>
#include <Modloader/app/structs/AudioSourceExtension__Array.h>

namespace app::classes::types {
    namespace AudioSourceExtension {
        inline app::AudioSourceExtension__Class** type_info = (app::AudioSourceExtension__Class**)(modloader::win::memory::resolve_rva(0x0475ECD8));
        inline app::AudioSourceExtension__Class* get_class() {
            return il2cpp::get_class<app::AudioSourceExtension__Class>(type_info, "UnityEngine", "AudioSourceExtension");
        }
        inline app::AudioSourceExtension* create() {
            return il2cpp::create_object<app::AudioSourceExtension>(get_class());
        }
        inline app::AudioSourceExtension__Array* create_array(int size) {
            return il2cpp::array_new<app::AudioSourceExtension__Array>(get_class(), size);
        }
        inline app::AudioSourceExtension__Array* create_array(const std::vector<app::AudioSourceExtension*>& items) {
            return il2cpp::array_new<app::AudioSourceExtension__Array>(get_class(), items);
        }
    } // namespace AudioSourceExtension
} // namespace app::classes::types
