#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeyCode__Enum {
        inline app::KeyCode__Enum__Class** type_info = (app::KeyCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473E4A8));
        inline app::KeyCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::KeyCode__Enum__Class>(type_info, "UnityEngine", "KeyCode");
        }
        inline app::KeyCode__Enum* create() {
            return il2cpp::create_object<app::KeyCode__Enum>(get_class());
        }
        inline app::KeyCode__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::KeyCode__Enum__Array>(get_class(), size);
        }
        inline app::KeyCode__Enum__Array* create_array(const std::vector<app::KeyCode__Enum*>& items) {
            return il2cpp::array_new<app::KeyCode__Enum__Array>(get_class(), items);
        }
    } // namespace KeyCode__Enum
} // namespace app::classes::types
