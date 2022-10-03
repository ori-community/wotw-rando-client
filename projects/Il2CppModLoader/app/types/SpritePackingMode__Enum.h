#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpritePackingMode__Enum {
        namespace {
            app::SpritePackingMode__Enum__Class* type_info_ref = nullptr;
        }
        app::SpritePackingMode__Enum__Class** type_info = &type_info_ref;
        inline app::SpritePackingMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpritePackingMode__Enum__Class>(type_info, "UnityEngine", "SpritePackingMode");
        }
        inline app::SpritePackingMode__Enum* create() {
            return il2cpp::create_object<app::SpritePackingMode__Enum>(get_class());
        }
    } // namespace SpritePackingMode__Enum
} // namespace app::classes::types
