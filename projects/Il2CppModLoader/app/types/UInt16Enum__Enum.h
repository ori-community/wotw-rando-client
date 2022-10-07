#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UInt16Enum__Enum {
        namespace {
            app::UInt16Enum__Enum__Class* type_info_ref = nullptr;
        }
        app::UInt16Enum__Enum__Class** type_info = &type_info_ref;
        inline app::UInt16Enum__Enum__Class* get_class() {
            return il2cpp::get_class<app::UInt16Enum__Enum__Class>(type_info, "System", "UInt16Enum");
        }
        inline app::UInt16Enum__Enum* create() {
            return il2cpp::create_object<app::UInt16Enum__Enum>(get_class());
        }
        inline app::UInt16Enum__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::UInt16Enum__Enum__Array>(get_class(), size);
        }
        inline app::UInt16Enum__Enum__Array* create_array(const std::vector<app::UInt16Enum__Enum*>& items) {
            return il2cpp::array_new<app::UInt16Enum__Enum__Array>(get_class(), items);
        }
    } // namespace UInt16Enum__Enum
} // namespace app::classes::types
