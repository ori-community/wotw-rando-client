#pragma once
#include <Modloader/app/structs/SoundMessage.h>
#include <Modloader/app/structs/SoundMessage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundMessage {
        inline app::SoundMessage__Class** type_info() {
            static app::SoundMessage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SoundMessage__Class**)(modloader::win::memory::resolve_rva(0x04784310));
            }
            return cache;
        }
        inline app::SoundMessage__Class* get_class() {
            return il2cpp::get_class<app::SoundMessage__Class>(type_info(), "", "SoundMessage");
        }
        inline app::SoundMessage* create() {
            return il2cpp::create_object<app::SoundMessage>(get_class());
        }
    } // namespace SoundMessage
} // namespace app::classes::types
