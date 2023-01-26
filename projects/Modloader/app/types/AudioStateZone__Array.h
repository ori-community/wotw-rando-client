#pragma once
#include <Modloader/app/structs/AudioStateZone__Array.h>
#include <Modloader/app/structs/AudioStateZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioStateZone__Array {
        inline app::AudioStateZone__Array__Class** type_info() {
            static app::AudioStateZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioStateZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioStateZone__Array__Class* get_class() {
            return il2cpp::get_class<app::AudioStateZone__Array__Class>(type_info(), "", "AudioStateZone[]");
        }
        inline app::AudioStateZone__Array* create() {
            return il2cpp::create_object<app::AudioStateZone__Array>(get_class());
        }
    } // namespace AudioStateZone__Array
} // namespace app::classes::types
