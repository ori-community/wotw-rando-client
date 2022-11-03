#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventIgnoreAttribute {
        namespace {
            inline app::EventIgnoreAttribute__Class* type_info_ref = nullptr;
        }
        inline app::EventIgnoreAttribute__Class** type_info = &type_info_ref;
        inline app::EventIgnoreAttribute__Class* get_class() {
            return il2cpp::get_class<app::EventIgnoreAttribute__Class>(type_info, "System.Diagnostics.Tracing", "EventIgnoreAttribute");
        }
        inline app::EventIgnoreAttribute* create() {
            return il2cpp::create_object<app::EventIgnoreAttribute>(get_class());
        }
    } // namespace EventIgnoreAttribute
} // namespace app::classes::types
