#pragma once
#include <Modloader/app/structs/XboxOneRichPresence.h>
#include <Modloader/app/structs/XboxOneRichPresence__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxOneRichPresence {
        inline app::XboxOneRichPresence__Class** type_info() {
            static app::XboxOneRichPresence__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxOneRichPresence__Class**)(modloader::win::memory::resolve_rva(0x04759190));
            }
            return cache;
        }
        inline app::XboxOneRichPresence__Class* get_class() {
            return il2cpp::get_class<app::XboxOneRichPresence__Class>(type_info(), "", "XboxOneRichPresence");
        }
        inline app::XboxOneRichPresence* create() {
            return il2cpp::create_object<app::XboxOneRichPresence>(get_class());
        }
    } // namespace XboxOneRichPresence
} // namespace app::classes::types
