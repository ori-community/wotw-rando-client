#pragma once
#include <Modloader/app/structs/AudioAPIOptions.h>
#include <Modloader/app/structs/AudioAPIOptions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioAPIOptions {
        inline app::AudioAPIOptions__Class** type_info() {
            static app::AudioAPIOptions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioAPIOptions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioAPIOptions__Class* get_class() {
            return il2cpp::get_class<app::AudioAPIOptions__Class>(type_info(), "", "AudioAPIOptions");
        }
        inline app::AudioAPIOptions* create() {
            return il2cpp::create_object<app::AudioAPIOptions>(get_class());
        }
    } // namespace AudioAPIOptions
} // namespace app::classes::types
