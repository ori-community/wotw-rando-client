#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScaleMode__Enum {
        namespace {
            inline app::ScaleMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ScaleMode__Enum__Class** type_info = &type_info_ref;
        inline app::ScaleMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ScaleMode__Enum__Class>(type_info, "UnityEngine", "ScaleMode");
        }
        inline app::ScaleMode__Enum* create() {
            return il2cpp::create_object<app::ScaleMode__Enum>(get_class());
        }
    } // namespace ScaleMode__Enum
} // namespace app::classes::types
