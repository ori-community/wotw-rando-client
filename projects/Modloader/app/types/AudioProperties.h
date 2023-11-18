#pragma once
#include <Modloader/app/structs/AudioProperties.h>
#include <Modloader/app/structs/AudioProperties__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioProperties {
        inline app::AudioProperties__Class** type_info() {
            static app::AudioProperties__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioProperties__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioProperties__Class* get_class() {
            return il2cpp::get_class<app::AudioProperties__Class>(type_info(), "", "AudioProperties");
        }
        inline app::AudioProperties* create() {
            return il2cpp::create_object<app::AudioProperties>(get_class());
        }
    } // namespace AudioProperties
} // namespace app::classes::types
