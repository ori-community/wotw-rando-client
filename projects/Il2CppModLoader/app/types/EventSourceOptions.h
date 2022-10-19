#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventSourceOptions {
        namespace {
            inline app::EventSourceOptions__Class* type_info_ref = nullptr;
        }
        inline app::EventSourceOptions__Class** type_info = &type_info_ref;
        inline app::EventSourceOptions__Class* get_class() {
            return il2cpp::get_class<app::EventSourceOptions__Class>(type_info, "System.Diagnostics.Tracing", "EventSourceOptions");
        }
        inline app::EventSourceOptions* create() {
            return il2cpp::create_object<app::EventSourceOptions>(get_class());
        }
        inline app::EventSourceOptions__Boxed* box(app::EventSourceOptions value) {
            return il2cpp::box_value<app::EventSourceOptions__Boxed>(get_class(), value);
        }
    } // namespace EventSourceOptions
} // namespace app::classes::types
