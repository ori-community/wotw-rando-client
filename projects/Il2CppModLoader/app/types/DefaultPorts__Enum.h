#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultPorts__Enum {
        namespace {
            inline app::DefaultPorts__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DefaultPorts__Enum__Class** type_info = &type_info_ref;
        inline app::DefaultPorts__Enum__Class* get_class() {
            return il2cpp::get_class<app::DefaultPorts__Enum__Class>(type_info, "System.Net", "DefaultPorts");
        }
        inline app::DefaultPorts__Enum* create() {
            return il2cpp::create_object<app::DefaultPorts__Enum>(get_class());
        }
    } // namespace DefaultPorts__Enum
} // namespace app::classes::types
