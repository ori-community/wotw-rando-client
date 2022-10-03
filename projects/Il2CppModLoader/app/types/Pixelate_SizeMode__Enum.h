#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Pixelate_SizeMode__Enum {
        namespace {
            app::Pixelate_SizeMode__Enum__Class* type_info_ref = nullptr;
        }
        app::Pixelate_SizeMode__Enum__Class** type_info = &type_info_ref;
        inline app::Pixelate_SizeMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Pixelate_SizeMode__Enum__Class>(type_info, "Colorful", "Pixelate", "SizeMode");
        }
        inline app::Pixelate_SizeMode__Enum* create() {
            return il2cpp::create_object<app::Pixelate_SizeMode__Enum>(get_class());
        }
    } // namespace Pixelate_SizeMode__Enum
} // namespace app::classes::types
