#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControllerCommand__Enum {
        namespace {
            inline app::ControllerCommand__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ControllerCommand__Enum__Class** type_info = &type_info_ref;
        inline app::ControllerCommand__Enum__Class* get_class() {
            return il2cpp::get_class<app::ControllerCommand__Enum__Class>(type_info, "System.Diagnostics.Tracing", "ControllerCommand");
        }
        inline app::ControllerCommand__Enum* create() {
            return il2cpp::create_object<app::ControllerCommand__Enum>(get_class());
        }
    } // namespace ControllerCommand__Enum
} // namespace app::classes::types
