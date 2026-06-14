#pragma once
#include <Modloader/app/structs/DurationControl_t.h>
#include <Modloader/app/structs/DurationControl_t__Boxed.h>
#include <Modloader/app/structs/DurationControl_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DurationControl_t {
        inline app::DurationControl_t__Class** type_info() {
            static app::DurationControl_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DurationControl_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DurationControl_t__Class* get_class() {
            return il2cpp::get_class<app::DurationControl_t__Class>(type_info(), "Steamworks", "DurationControl_t");
        }
        inline app::DurationControl_t* create() {
            return il2cpp::create_object<app::DurationControl_t>(get_class());
        }
        inline app::DurationControl_t__Boxed* box(app::DurationControl_t value) {
            return il2cpp::box_value<app::DurationControl_t__Boxed>(get_class(), value);
        }
    } // namespace DurationControl_t
} // namespace app::classes::types
