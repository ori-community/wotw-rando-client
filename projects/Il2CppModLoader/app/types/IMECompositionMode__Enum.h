#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMECompositionMode__Enum {
        namespace {
            inline app::IMECompositionMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::IMECompositionMode__Enum__Class** type_info = &type_info_ref;
        inline app::IMECompositionMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::IMECompositionMode__Enum__Class>(type_info, "UnityEngine", "IMECompositionMode");
        }
        inline app::IMECompositionMode__Enum* create() {
            return il2cpp::create_object<app::IMECompositionMode__Enum>(get_class());
        }
    } // namespace IMECompositionMode__Enum
} // namespace app::classes::types
