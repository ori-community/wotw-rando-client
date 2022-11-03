#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundMessage {
        inline app::SoundMessage__Class** type_info = (app::SoundMessage__Class**)(modloader::win::memory::resolve_rva(0x04784310));
        inline app::SoundMessage__Class* get_class() {
            return il2cpp::get_class<app::SoundMessage__Class>(type_info, "", "SoundMessage");
        }
        inline app::SoundMessage* create() {
            return il2cpp::create_object<app::SoundMessage>(get_class());
        }
    } // namespace SoundMessage
} // namespace app::classes::types
