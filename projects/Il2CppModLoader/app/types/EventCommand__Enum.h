#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventCommand__Enum {
        namespace {
            app::EventCommand__Enum__Class* type_info_ref = nullptr;
        }
        app::EventCommand__Enum__Class** type_info = &type_info_ref;
        inline app::EventCommand__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventCommand__Enum__Class>(type_info, "System.Diagnostics.Tracing", "EventCommand");
        }
        inline app::EventCommand__Enum* create() {
            return il2cpp::create_object<app::EventCommand__Enum>(get_class());
        }
    } // namespace EventCommand__Enum
} // namespace app::classes::types
