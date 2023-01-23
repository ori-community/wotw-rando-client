#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EventDataAttribute__Class.h>
#include <Modloader/app/structs/EventDataAttribute.h>

namespace app::classes::types {
    namespace EventDataAttribute {
        namespace {
            inline app::EventDataAttribute__Class* type_info_ref = nullptr;
        }
        inline app::EventDataAttribute__Class** type_info = &type_info_ref;
        inline app::EventDataAttribute__Class* get_class() {
            return il2cpp::get_class<app::EventDataAttribute__Class>(type_info, "System.Diagnostics.Tracing", "EventDataAttribute");
        }
        inline app::EventDataAttribute* create() {
            return il2cpp::create_object<app::EventDataAttribute>(get_class());
        }
    } // namespace EventDataAttribute
} // namespace app::classes::types
