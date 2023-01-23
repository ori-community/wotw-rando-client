#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EventActivityOptions__Enum__Class.h>
#include <Modloader/app/structs/EventActivityOptions__Enum.h>

namespace app::classes::types {
    namespace EventActivityOptions__Enum {
        namespace {
            inline app::EventActivityOptions__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EventActivityOptions__Enum__Class** type_info = &type_info_ref;
        inline app::EventActivityOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventActivityOptions__Enum__Class>(type_info, "System.Diagnostics.Tracing", "EventActivityOptions");
        }
        inline app::EventActivityOptions__Enum* create() {
            return il2cpp::create_object<app::EventActivityOptions__Enum>(get_class());
        }
    } // namespace EventActivityOptions__Enum
} // namespace app::classes::types
