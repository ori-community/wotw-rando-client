#pragma once
#include <Modloader/app/structs/EventDescriptor.h>
#include <Modloader/app/structs/EventDescriptor__Boxed.h>
#include <Modloader/app/structs/EventDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventDescriptor {
        inline app::EventDescriptor__Class** type_info() {
            static app::EventDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0477EC08));
            }
            return cache;
        }
        inline app::EventDescriptor__Class* get_class() {
            return il2cpp::get_class<app::EventDescriptor__Class>(type_info(), "System.Diagnostics.Tracing", "EventDescriptor");
        }
        inline app::EventDescriptor* create() {
            return il2cpp::create_object<app::EventDescriptor>(get_class());
        }
        inline app::EventDescriptor__Boxed* box(app::EventDescriptor value) {
            return il2cpp::box_value<app::EventDescriptor__Boxed>(get_class(), value);
        }
    } // namespace EventDescriptor
} // namespace app::classes::types
