#pragma once
#include <Modloader/app/structs/ControllerCommand__Enum.h>
#include <Modloader/app/structs/ControllerCommand__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControllerCommand__Enum {
        inline app::ControllerCommand__Enum__Class** type_info() {
            static app::ControllerCommand__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ControllerCommand__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ControllerCommand__Enum__Class* get_class() {
            return il2cpp::get_class<app::ControllerCommand__Enum__Class>(type_info(), "System.Diagnostics.Tracing", "ControllerCommand");
        }
        inline app::ControllerCommand__Enum* create() {
            return il2cpp::create_object<app::ControllerCommand__Enum>(get_class());
        }
    } // namespace ControllerCommand__Enum
} // namespace app::classes::types
