#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CullMode__Enum {
        namespace {
            inline app::CullMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CullMode__Enum__Class** type_info = &type_info_ref;
        inline app::CullMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::CullMode__Enum__Class>(type_info, "UnityEngine.Rendering", "CullMode");
        }
        inline app::CullMode__Enum* create() {
            return il2cpp::create_object<app::CullMode__Enum>(get_class());
        }
    } // namespace CullMode__Enum
} // namespace app::classes::types
