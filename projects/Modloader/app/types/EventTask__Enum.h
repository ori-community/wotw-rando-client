#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventTask__Enum {
        namespace {
            inline app::EventTask__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EventTask__Enum__Class** type_info = &type_info_ref;
        inline app::EventTask__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventTask__Enum__Class>(type_info, "System.Diagnostics.Tracing", "EventTask");
        }
        inline app::EventTask__Enum* create() {
            return il2cpp::create_object<app::EventTask__Enum>(get_class());
        }
    } // namespace EventTask__Enum
} // namespace app::classes::types
