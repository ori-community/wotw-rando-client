#pragma once
#include <Modloader/app/structs/AmbienceListener.h>
#include <Modloader/app/structs/AmbienceListener__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AmbienceListener {
        inline app::AmbienceListener__Class** type_info() {
            static app::AmbienceListener__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AmbienceListener__Class**)(modloader::win::memory::resolve_rva(0x0479A1B0));
            }
            return cache;
        }
        inline app::AmbienceListener__Class* get_class() {
            return il2cpp::get_class<app::AmbienceListener__Class>(type_info(), "", "AmbienceListener");
        }
        inline app::AmbienceListener* create() {
            return il2cpp::create_object<app::AmbienceListener>(get_class());
        }
    } // namespace AmbienceListener
} // namespace app::classes::types
