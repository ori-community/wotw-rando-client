#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeviceType__Enum {
        inline app::DeviceType__Enum__Class** type_info = (app::DeviceType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04783DD0));
        inline app::DeviceType__Enum__Class* get_class() {
            return il2cpp::get_class<app::DeviceType__Enum__Class>(type_info, "UnityEngine", "DeviceType");
        }
        inline app::DeviceType__Enum* create() {
            return il2cpp::create_object<app::DeviceType__Enum>(get_class());
        }
    } // namespace DeviceType__Enum
} // namespace app::classes::types
