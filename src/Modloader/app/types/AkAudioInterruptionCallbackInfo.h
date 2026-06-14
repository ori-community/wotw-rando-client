#pragma once
#include <Modloader/app/structs/AkAudioInterruptionCallbackInfo.h>
#include <Modloader/app/structs/AkAudioInterruptionCallbackInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkAudioInterruptionCallbackInfo {
        inline app::AkAudioInterruptionCallbackInfo__Class** type_info() {
            static app::AkAudioInterruptionCallbackInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkAudioInterruptionCallbackInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkAudioInterruptionCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkAudioInterruptionCallbackInfo__Class>(type_info(), "", "AkAudioInterruptionCallbackInfo");
        }
        inline app::AkAudioInterruptionCallbackInfo* create() {
            return il2cpp::create_object<app::AkAudioInterruptionCallbackInfo>(get_class());
        }
    } // namespace AkAudioInterruptionCallbackInfo
} // namespace app::classes::types
