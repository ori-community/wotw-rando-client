#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTimelineUiFaderOnEnable {
        namespace {
            app::MoonTimelineUiFaderOnEnable__Class* type_info_ref = nullptr;
        }
        app::MoonTimelineUiFaderOnEnable__Class** type_info = &type_info_ref;
        inline app::MoonTimelineUiFaderOnEnable__Class* get_class() {
            return il2cpp::get_class<app::MoonTimelineUiFaderOnEnable__Class>(type_info, "", "MoonTimelineUiFaderOnEnable");
        }
        inline app::MoonTimelineUiFaderOnEnable* create() {
            return il2cpp::create_object<app::MoonTimelineUiFaderOnEnable>(get_class());
        }
    } // namespace MoonTimelineUiFaderOnEnable
} // namespace app::classes::types
