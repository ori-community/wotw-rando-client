#pragma once
#include <Modloader/app/structs/KeyCode__Enum__Array.h>
#include <Modloader/app/structs/KeyCode__Enum__Array__Array.h>
#include <Modloader/app/structs/KeyCode__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyCode__Enum__Array {
        inline app::KeyCode__Enum__Array__Class** type_info() {
            static app::KeyCode__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KeyCode__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04766760));
            }
            return cache;
        }
        inline app::KeyCode__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::KeyCode__Enum__Array__Class>(type_info(), "UnityEngine", "KeyCode[]");
        }
        inline app::KeyCode__Enum__Array* create() {
            return il2cpp::create_object<app::KeyCode__Enum__Array>(get_class());
        }
        inline app::KeyCode__Enum__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::KeyCode__Enum__Array__Array>(get_class(), size);
        }
        inline app::KeyCode__Enum__Array__Array* create_array(const std::vector<app::KeyCode__Enum__Array*>& items) {
            return il2cpp::array_new<app::KeyCode__Enum__Array__Array>(get_class(), items);
        }
    } // namespace KeyCode__Enum__Array
} // namespace app::classes::types
