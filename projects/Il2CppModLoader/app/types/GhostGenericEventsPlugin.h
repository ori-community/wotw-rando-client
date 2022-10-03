#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostGenericEventsPlugin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostGenericEventsPlugin__Class** type_info;
        inline app::GhostGenericEventsPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostGenericEventsPlugin__Class>(type_info, "", "GhostGenericEventsPlugin");
        }
        inline app::GhostGenericEventsPlugin* create() {
            return il2cpp::create_object<app::GhostGenericEventsPlugin>(get_class());
        }
    } // namespace GhostGenericEventsPlugin
} // namespace app::classes::types
