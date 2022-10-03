#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventOpcode__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventOpcode__Enum__Class** type_info;
        inline app::EventOpcode__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventOpcode__Enum__Class>(type_info, "System.Diagnostics.Tracing", "EventOpcode");
        }
        inline app::EventOpcode__Enum* create() {
            return il2cpp::create_object<app::EventOpcode__Enum>(get_class());
        }
    } // namespace EventOpcode__Enum
} // namespace app::classes::types
