#pragma once
#include <Modloader/app/structs/Led_SizeMode__Enum.h>
#include <Modloader/app/structs/Led_SizeMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Led_SizeMode__Enum {
        inline app::Led_SizeMode__Enum__Class** type_info() {
            static app::Led_SizeMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Led_SizeMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Led_SizeMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Led_SizeMode__Enum__Class>(type_info(), "Colorful", "Led", "SizeMode");
        }
        inline app::Led_SizeMode__Enum* create() {
            return il2cpp::create_object<app::Led_SizeMode__Enum>(get_class());
        }
    } // namespace Led_SizeMode__Enum
} // namespace app::classes::types
