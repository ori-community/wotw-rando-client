#pragma once
#include <Modloader/app/structs/AkMIDIEventCallbackInfo.h>
#include <Modloader/app/structs/AkMIDIEventCallbackInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMIDIEventCallbackInfo {
        inline app::AkMIDIEventCallbackInfo__Class** type_info() {
            static app::AkMIDIEventCallbackInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkMIDIEventCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x04794528));
            }
            return cache;
        }
        inline app::AkMIDIEventCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkMIDIEventCallbackInfo__Class>(type_info(), "", "AkMIDIEventCallbackInfo");
        }
        inline app::AkMIDIEventCallbackInfo* create() {
            return il2cpp::create_object<app::AkMIDIEventCallbackInfo>(get_class());
        }
    } // namespace AkMIDIEventCallbackInfo
} // namespace app::classes::types
