#pragma once
#include <Modloader/app/structs/KeyEvents.h>
#include <Modloader/app/structs/KeyEvents__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyEvents {
        inline app::KeyEvents__Class** type_info() {
            static app::KeyEvents__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KeyEvents__Class**)(modloader::win::memory::resolve_rva(0x047851C0));
            }
            return cache;
        }
        inline app::KeyEvents__Class* get_class() {
            return il2cpp::get_class<app::KeyEvents__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "KeyEvents");
        }
        inline app::KeyEvents* create() {
            return il2cpp::create_object<app::KeyEvents>(get_class());
        }
    } // namespace KeyEvents
} // namespace app::classes::types
