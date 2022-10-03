#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkAudioInterruptionCallbackInfo {
        namespace {
            app::AkAudioInterruptionCallbackInfo__Class* type_info_ref = nullptr;
        }
        app::AkAudioInterruptionCallbackInfo__Class** type_info = &type_info_ref;
        inline app::AkAudioInterruptionCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkAudioInterruptionCallbackInfo__Class>(type_info, "", "AkAudioInterruptionCallbackInfo");
        }
        inline app::AkAudioInterruptionCallbackInfo* create() {
            return il2cpp::create_object<app::AkAudioInterruptionCallbackInfo>(get_class());
        }
    } // namespace AkAudioInterruptionCallbackInfo
} // namespace app::classes::types
