#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OverworldZone {
        namespace {
            app::OverworldZone__Class* type_info_ref = nullptr;
        }
        app::OverworldZone__Class** type_info = &type_info_ref;
        inline app::OverworldZone__Class* get_class() {
            return il2cpp::get_class<app::OverworldZone__Class>(type_info, "", "OverworldZone");
        }
        inline app::OverworldZone* create() {
            return il2cpp::create_object<app::OverworldZone>(get_class());
        }
    } // namespace OverworldZone
} // namespace app::classes::types
