#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Selectable_Transition__Enum {
        namespace {
            inline app::Selectable_Transition__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Selectable_Transition__Enum__Class** type_info = &type_info_ref;
        inline app::Selectable_Transition__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Selectable_Transition__Enum__Class>(type_info, "UnityEngine.UI", "Selectable", "Transition");
        }
        inline app::Selectable_Transition__Enum* create() {
            return il2cpp::create_object<app::Selectable_Transition__Enum>(get_class());
        }
    } // namespace Selectable_Transition__Enum
} // namespace app::classes::types
