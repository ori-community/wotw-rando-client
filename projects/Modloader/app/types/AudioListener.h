#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AudioListener__Class.h>
#include <Modloader/app/structs/AudioListener.h>

namespace app::classes::types {
    namespace AudioListener {
        inline app::AudioListener__Class** type_info = (app::AudioListener__Class**)(modloader::win::memory::resolve_rva(0x0475F668));
        inline app::AudioListener__Class* get_class() {
            return il2cpp::get_class<app::AudioListener__Class>(type_info, "UnityEngine", "AudioListener");
        }
        inline app::AudioListener* create() {
            return il2cpp::create_object<app::AudioListener>(get_class());
        }
    } // namespace AudioListener
} // namespace app::classes::types
