#pragma once
#include <Modloader/app/structs/EventSourceOptions.h>
#include <Modloader/app/structs/EventSourceOptions__Boxed.h>
#include <Modloader/app/structs/EventSourceOptions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventSourceOptions {
        inline app::EventSourceOptions__Class** type_info() {
            static app::EventSourceOptions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventSourceOptions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventSourceOptions__Class* get_class() {
            return il2cpp::get_class<app::EventSourceOptions__Class>(type_info(), "System.Diagnostics.Tracing", "EventSourceOptions");
        }
        inline app::EventSourceOptions* create() {
            return il2cpp::create_object<app::EventSourceOptions>(get_class());
        }
        inline app::EventSourceOptions__Boxed* box(app::EventSourceOptions value) {
            return il2cpp::box_value<app::EventSourceOptions__Boxed>(get_class(), value);
        }
    } // namespace EventSourceOptions
} // namespace app::classes::types
