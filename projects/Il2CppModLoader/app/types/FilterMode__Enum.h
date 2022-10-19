#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FilterMode__Enum {
        namespace {
            inline app::FilterMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FilterMode__Enum__Class** type_info = &type_info_ref;
        inline app::FilterMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::FilterMode__Enum__Class>(type_info, "UnityEngine", "FilterMode");
        }
        inline app::FilterMode__Enum* create() {
            return il2cpp::create_object<app::FilterMode__Enum>(get_class());
        }
        inline app::FilterMode__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::FilterMode__Enum__Array>(get_class(), size);
        }
        inline app::FilterMode__Enum__Array* create_array(const std::vector<app::FilterMode__Enum*>& items) {
            return il2cpp::array_new<app::FilterMode__Enum__Array>(get_class(), items);
        }
    } // namespace FilterMode__Enum
} // namespace app::classes::types
