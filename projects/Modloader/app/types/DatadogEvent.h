#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DatadogEvent__Class.h>
#include <Modloader/app/structs/DatadogEvent.h>

namespace app::classes::types {
    namespace DatadogEvent {
        namespace {
            inline app::DatadogEvent__Class* type_info_ref = nullptr;
        }
        inline app::DatadogEvent__Class** type_info = &type_info_ref;
        inline app::DatadogEvent__Class* get_class() {
            return il2cpp::get_class<app::DatadogEvent__Class>(type_info, "", "DatadogEvent");
        }
        inline app::DatadogEvent* create() {
            return il2cpp::create_object<app::DatadogEvent>(get_class());
        }
    } // namespace DatadogEvent
} // namespace app::classes::types
