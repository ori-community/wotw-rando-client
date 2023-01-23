#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkAudioInterruptionCallbackInfo__Class.h>
#include <Modloader/app/structs/AkAudioInterruptionCallbackInfo.h>

namespace app::classes::types {
    namespace AkAudioInterruptionCallbackInfo {
        namespace {
            inline app::AkAudioInterruptionCallbackInfo__Class* type_info_ref = nullptr;
        }
        inline app::AkAudioInterruptionCallbackInfo__Class** type_info = &type_info_ref;
        inline app::AkAudioInterruptionCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkAudioInterruptionCallbackInfo__Class>(type_info, "", "AkAudioInterruptionCallbackInfo");
        }
        inline app::AkAudioInterruptionCallbackInfo* create() {
            return il2cpp::create_object<app::AkAudioInterruptionCallbackInfo>(get_class());
        }
    } // namespace AkAudioInterruptionCallbackInfo
} // namespace app::classes::types
