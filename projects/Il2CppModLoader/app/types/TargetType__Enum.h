#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TargetType__Enum {
        namespace {
            inline app::TargetType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TargetType__Enum__Class** type_info = &type_info_ref;
        inline app::TargetType__Enum__Class* get_class() {
            return il2cpp::get_class<app::TargetType__Enum__Class>(type_info, "UnityEngine.Bindings", "TargetType");
        }
        inline app::TargetType__Enum* create() {
            return il2cpp::create_object<app::TargetType__Enum>(get_class());
        }
    } // namespace TargetType__Enum
} // namespace app::classes::types
