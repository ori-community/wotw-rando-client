#pragma once
#include <Modloader/app/structs/InputField_ContentType__Enum__Array.h>
#include <Modloader/app/structs/InputField_ContentType__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputField_ContentType__Enum__Array {
        inline app::InputField_ContentType__Enum__Array__Class** type_info() {
            static app::InputField_ContentType__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InputField_ContentType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04760E48));
            }
            return cache;
        }
        inline app::InputField_ContentType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::InputField_ContentType__Enum__Array__Class>(type_info(), "UnityEngine.UI", "InputField+ContentType[]");
        }
        inline app::InputField_ContentType__Enum__Array* create() {
            return il2cpp::create_object<app::InputField_ContentType__Enum__Array>(get_class());
        }
    } // namespace InputField_ContentType__Enum__Array
} // namespace app::classes::types
