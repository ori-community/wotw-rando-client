#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UInt32Enum__Enum {
        namespace {
            inline app::UInt32Enum__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UInt32Enum__Enum__Class** type_info = &type_info_ref;
        inline app::UInt32Enum__Enum__Class* get_class() {
            return il2cpp::get_class<app::UInt32Enum__Enum__Class>(type_info, "System", "UInt32Enum");
        }
        inline app::UInt32Enum__Enum* create() {
            return il2cpp::create_object<app::UInt32Enum__Enum>(get_class());
        }
        inline app::UInt32Enum__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::UInt32Enum__Enum__Array>(get_class(), size);
        }
        inline app::UInt32Enum__Enum__Array* create_array(const std::vector<app::UInt32Enum__Enum*>& items) {
            return il2cpp::array_new<app::UInt32Enum__Enum__Array>(get_class(), items);
        }
    } // namespace UInt32Enum__Enum
} // namespace app::classes::types
