#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationMetaData_ViewModes__Enum {
        namespace {
            inline app::AnimationMetaData_ViewModes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AnimationMetaData_ViewModes__Enum__Class** type_info = &type_info_ref;
        inline app::AnimationMetaData_ViewModes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationMetaData_ViewModes__Enum__Class>(type_info, "", "AnimationMetaData", "ViewModes");
        }
        inline app::AnimationMetaData_ViewModes__Enum* create() {
            return il2cpp::create_object<app::AnimationMetaData_ViewModes__Enum>(get_class());
        }
    } // namespace AnimationMetaData_ViewModes__Enum
} // namespace app::classes::types
