#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EscapeRaceHandler {
        namespace {
            app::EscapeRaceHandler__Class* type_info_ref = nullptr;
        }
        app::EscapeRaceHandler__Class** type_info = &type_info_ref;
        inline app::EscapeRaceHandler__Class* get_class() {
            return il2cpp::get_class<app::EscapeRaceHandler__Class>(type_info, "Moon.Race", "EscapeRaceHandler");
        }
        inline app::EscapeRaceHandler* create() {
            return il2cpp::create_object<app::EscapeRaceHandler>(get_class());
        }
    } // namespace EscapeRaceHandler
} // namespace app::classes::types
