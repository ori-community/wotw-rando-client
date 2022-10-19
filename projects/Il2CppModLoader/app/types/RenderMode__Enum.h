#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RenderMode__Enum {
        namespace {
            inline app::RenderMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RenderMode__Enum__Class** type_info = &type_info_ref;
        inline app::RenderMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderMode__Enum__Class>(type_info, "UnityEngine", "RenderMode");
        }
        inline app::RenderMode__Enum* create() {
            return il2cpp::create_object<app::RenderMode__Enum>(get_class());
        }
    } // namespace RenderMode__Enum
} // namespace app::classes::types
