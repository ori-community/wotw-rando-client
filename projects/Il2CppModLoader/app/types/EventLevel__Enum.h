#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventLevel__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventLevel__Enum__Class** type_info;
        inline app::EventLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventLevel__Enum__Class>(type_info, "System.Diagnostics.Tracing", "EventLevel");
        }
        inline app::EventLevel__Enum* create() {
            return il2cpp::create_object<app::EventLevel__Enum>(get_class());
        }
    } // namespace EventLevel__Enum
} // namespace app::classes::types
