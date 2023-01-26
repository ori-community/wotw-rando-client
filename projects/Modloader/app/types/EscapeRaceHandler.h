#pragma once
#include <Modloader/app/structs/EscapeRaceHandler.h>
#include <Modloader/app/structs/EscapeRaceHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EscapeRaceHandler {
        inline app::EscapeRaceHandler__Class** type_info() {
            static app::EscapeRaceHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EscapeRaceHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EscapeRaceHandler__Class* get_class() {
            return il2cpp::get_class<app::EscapeRaceHandler__Class>(type_info(), "Moon.Race", "EscapeRaceHandler");
        }
        inline app::EscapeRaceHandler* create() {
            return il2cpp::create_object<app::EscapeRaceHandler>(get_class());
        }
    } // namespace EscapeRaceHandler
} // namespace app::classes::types
