#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldEventsOnAwake {
        namespace {
            app::WorldEventsOnAwake__Class* type_info_ref = nullptr;
        }
        app::WorldEventsOnAwake__Class** type_info = &type_info_ref;
        inline app::WorldEventsOnAwake__Class* get_class() {
            return il2cpp::get_class<app::WorldEventsOnAwake__Class>(type_info, "", "WorldEventsOnAwake");
        }
        inline app::WorldEventsOnAwake* create() {
            return il2cpp::create_object<app::WorldEventsOnAwake>(get_class());
        }
    } // namespace WorldEventsOnAwake
} // namespace app::classes::types
