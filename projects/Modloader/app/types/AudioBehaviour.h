#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AudioBehaviour__Class.h>
#include <Modloader/app/structs/AudioBehaviour.h>

namespace app::classes::types {
    namespace AudioBehaviour {
        namespace {
            inline app::AudioBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::AudioBehaviour__Class** type_info = &type_info_ref;
        inline app::AudioBehaviour__Class* get_class() {
            return il2cpp::get_class<app::AudioBehaviour__Class>(type_info, "UnityEngine", "AudioBehaviour");
        }
        inline app::AudioBehaviour* create() {
            return il2cpp::create_object<app::AudioBehaviour>(get_class());
        }
    } // namespace AudioBehaviour
} // namespace app::classes::types
