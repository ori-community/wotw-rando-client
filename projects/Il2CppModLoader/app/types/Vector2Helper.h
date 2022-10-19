#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Vector2Helper {
        namespace {
            inline app::Vector2Helper__Class* type_info_ref = nullptr;
        }
        inline app::Vector2Helper__Class** type_info = &type_info_ref;
        inline app::Vector2Helper__Class* get_class() {
            return il2cpp::get_class<app::Vector2Helper__Class>(type_info, "", "Vector2Helper");
        }
        inline app::Vector2Helper* create() {
            return il2cpp::create_object<app::Vector2Helper>(get_class());
        }
    } // namespace Vector2Helper
} // namespace app::classes::types
