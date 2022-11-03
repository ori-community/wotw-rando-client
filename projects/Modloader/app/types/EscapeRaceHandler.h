#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EscapeRaceHandler {
        namespace {
            inline app::EscapeRaceHandler__Class* type_info_ref = nullptr;
        }
        inline app::EscapeRaceHandler__Class** type_info = &type_info_ref;
        inline app::EscapeRaceHandler__Class* get_class() {
            return il2cpp::get_class<app::EscapeRaceHandler__Class>(type_info, "Moon.Race", "EscapeRaceHandler");
        }
        inline app::EscapeRaceHandler* create() {
            return il2cpp::create_object<app::EscapeRaceHandler>(get_class());
        }
    } // namespace EscapeRaceHandler
} // namespace app::classes::types
