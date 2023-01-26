#pragma once
#include <Modloader/app/structs/Pixelate_SizeMode__Enum.h>
#include <Modloader/app/structs/Pixelate_SizeMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Pixelate_SizeMode__Enum {
        inline app::Pixelate_SizeMode__Enum__Class** type_info() {
            static app::Pixelate_SizeMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Pixelate_SizeMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Pixelate_SizeMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Pixelate_SizeMode__Enum__Class>(type_info(), "Colorful", "Pixelate", "SizeMode");
        }
        inline app::Pixelate_SizeMode__Enum* create() {
            return il2cpp::create_object<app::Pixelate_SizeMode__Enum>(get_class());
        }
    } // namespace Pixelate_SizeMode__Enum
} // namespace app::classes::types
