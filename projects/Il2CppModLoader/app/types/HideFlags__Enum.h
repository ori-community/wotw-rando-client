#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HideFlags__Enum {
        inline app::HideFlags__Enum__Class** type_info = (app::HideFlags__Enum__Class**)(modloader::win::memory::resolve_rva(0x04768BF0));
        inline app::HideFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::HideFlags__Enum__Class>(type_info, "UnityEngine", "HideFlags");
        }
        inline app::HideFlags__Enum* create() {
            return il2cpp::create_object<app::HideFlags__Enum>(get_class());
        }
    } // namespace HideFlags__Enum
} // namespace app::classes::types
