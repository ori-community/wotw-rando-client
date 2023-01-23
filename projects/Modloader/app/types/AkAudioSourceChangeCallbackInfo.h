#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkAudioSourceChangeCallbackInfo__Class.h>
#include <Modloader/app/structs/AkAudioSourceChangeCallbackInfo.h>

namespace app::classes::types {
    namespace AkAudioSourceChangeCallbackInfo {
        inline app::AkAudioSourceChangeCallbackInfo__Class** type_info = (app::AkAudioSourceChangeCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x0478B700));
        inline app::AkAudioSourceChangeCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkAudioSourceChangeCallbackInfo__Class>(type_info, "", "AkAudioSourceChangeCallbackInfo");
        }
        inline app::AkAudioSourceChangeCallbackInfo* create() {
            return il2cpp::create_object<app::AkAudioSourceChangeCallbackInfo>(get_class());
        }
    } // namespace AkAudioSourceChangeCallbackInfo
} // namespace app::classes::types
