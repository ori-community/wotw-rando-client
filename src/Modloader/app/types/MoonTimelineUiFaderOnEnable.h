#pragma once
#include <Modloader/app/structs/MoonTimelineUiFaderOnEnable.h>
#include <Modloader/app/structs/MoonTimelineUiFaderOnEnable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTimelineUiFaderOnEnable {
        inline app::MoonTimelineUiFaderOnEnable__Class** type_info() {
            static app::MoonTimelineUiFaderOnEnable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTimelineUiFaderOnEnable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTimelineUiFaderOnEnable__Class* get_class() {
            return il2cpp::get_class<app::MoonTimelineUiFaderOnEnable__Class>(type_info(), "", "MoonTimelineUiFaderOnEnable");
        }
        inline app::MoonTimelineUiFaderOnEnable* create() {
            return il2cpp::create_object<app::MoonTimelineUiFaderOnEnable>(get_class());
        }
    } // namespace MoonTimelineUiFaderOnEnable
} // namespace app::classes::types
