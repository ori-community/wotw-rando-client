#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkMIDIEventCallbackInfo {
        inline app::AkMIDIEventCallbackInfo__Class** type_info = (app::AkMIDIEventCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x04794528));
        inline app::AkMIDIEventCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkMIDIEventCallbackInfo__Class>(type_info, "", "AkMIDIEventCallbackInfo");
        }
        inline app::AkMIDIEventCallbackInfo* create() {
            return il2cpp::create_object<app::AkMIDIEventCallbackInfo>(get_class());
        }
    } // namespace AkMIDIEventCallbackInfo
} // namespace app::classes::types
