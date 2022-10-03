#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostGenericEventsPlugin_Data {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostGenericEventsPlugin_Data__Class** type_info;
        inline app::GhostGenericEventsPlugin_Data__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostGenericEventsPlugin_Data__Class>(type_info, "", "GhostGenericEventsPlugin", "Data");
        }
        inline app::GhostGenericEventsPlugin_Data* create() {
            return il2cpp::create_object<app::GhostGenericEventsPlugin_Data>(get_class());
        }
        inline app::GhostGenericEventsPlugin_Data__Boxed* box(app::GhostGenericEventsPlugin_Data value) {
            return il2cpp::box_value<app::GhostGenericEventsPlugin_Data__Boxed>(get_class(), value);
        }
    } // namespace GhostGenericEventsPlugin_Data
} // namespace app::classes::types
