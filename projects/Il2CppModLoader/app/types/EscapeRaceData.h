#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EscapeRaceData {
        namespace {
            app::EscapeRaceData__Class* type_info_ref = nullptr;
        }
        app::EscapeRaceData__Class** type_info = &type_info_ref;
        inline app::EscapeRaceData__Class* get_class() {
            return il2cpp::get_class<app::EscapeRaceData__Class>(type_info, "Moon.Race", "EscapeRaceData");
        }
        inline app::EscapeRaceData* create() {
            return il2cpp::create_object<app::EscapeRaceData>(get_class());
        }
    } // namespace EscapeRaceData
} // namespace app::classes::types
