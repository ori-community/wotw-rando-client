#pragma once
#include <Modloader/app/structs/InputField_ContentType__Enum.h>
#include <Modloader/app/structs/InputField_ContentType__Enum__Array.h>
#include <Modloader/app/structs/InputField_ContentType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputField_ContentType__Enum {
        inline app::InputField_ContentType__Enum__Class** type_info() {
            static app::InputField_ContentType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InputField_ContentType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InputField_ContentType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::InputField_ContentType__Enum__Class>(type_info(), "UnityEngine.UI", "InputField", "ContentType");
        }
        inline app::InputField_ContentType__Enum* create() {
            return il2cpp::create_object<app::InputField_ContentType__Enum>(get_class());
        }
        inline app::InputField_ContentType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::InputField_ContentType__Enum__Array>(get_class(), size);
        }
        inline app::InputField_ContentType__Enum__Array* create_array(const std::vector<app::InputField_ContentType__Enum*>& items) {
            return il2cpp::array_new<app::InputField_ContentType__Enum__Array>(get_class(), items);
        }
    } // namespace InputField_ContentType__Enum
} // namespace app::classes::types
