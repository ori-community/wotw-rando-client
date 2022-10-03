#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostServerEventsPlugin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostServerEventsPlugin__Class** type_info;
        inline app::GhostServerEventsPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostServerEventsPlugin__Class>(type_info, "", "GhostServerEventsPlugin");
        }
        inline app::GhostServerEventsPlugin* create() {
            return il2cpp::create_object<app::GhostServerEventsPlugin>(get_class());
        }
    } // namespace GhostServerEventsPlugin
} // namespace app::classes::types
