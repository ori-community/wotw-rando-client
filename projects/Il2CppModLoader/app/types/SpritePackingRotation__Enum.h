#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpritePackingRotation__Enum {
        namespace {
            app::SpritePackingRotation__Enum__Class* type_info_ref = nullptr;
        }
        app::SpritePackingRotation__Enum__Class** type_info = &type_info_ref;
        inline app::SpritePackingRotation__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpritePackingRotation__Enum__Class>(type_info, "UnityEngine", "SpritePackingRotation");
        }
        inline app::SpritePackingRotation__Enum* create() {
            return il2cpp::create_object<app::SpritePackingRotation__Enum>(get_class());
        }
    } // namespace SpritePackingRotation__Enum
} // namespace app::classes::types
