#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Led_SizeMode__Enum {
        namespace {
            inline app::Led_SizeMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Led_SizeMode__Enum__Class** type_info = &type_info_ref;
        inline app::Led_SizeMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Led_SizeMode__Enum__Class>(type_info, "Colorful", "Led", "SizeMode");
        }
        inline app::Led_SizeMode__Enum* create() {
            return il2cpp::create_object<app::Led_SizeMode__Enum>(get_class());
        }
    } // namespace Led_SizeMode__Enum
} // namespace app::classes::types
