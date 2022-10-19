#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ForceMode2D__Enum {
        namespace {
            inline app::ForceMode2D__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ForceMode2D__Enum__Class** type_info = &type_info_ref;
        inline app::ForceMode2D__Enum__Class* get_class() {
            return il2cpp::get_class<app::ForceMode2D__Enum__Class>(type_info, "UnityEngine", "ForceMode2D");
        }
        inline app::ForceMode2D__Enum* create() {
            return il2cpp::create_object<app::ForceMode2D__Enum>(get_class());
        }
    } // namespace ForceMode2D__Enum
} // namespace app::classes::types
