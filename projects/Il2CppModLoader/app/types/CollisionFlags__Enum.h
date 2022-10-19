#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CollisionFlags__Enum {
        namespace {
            inline app::CollisionFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CollisionFlags__Enum__Class** type_info = &type_info_ref;
        inline app::CollisionFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::CollisionFlags__Enum__Class>(type_info, "UnityEngine", "CollisionFlags");
        }
        inline app::CollisionFlags__Enum* create() {
            return il2cpp::create_object<app::CollisionFlags__Enum>(get_class());
        }
    } // namespace CollisionFlags__Enum
} // namespace app::classes::types
