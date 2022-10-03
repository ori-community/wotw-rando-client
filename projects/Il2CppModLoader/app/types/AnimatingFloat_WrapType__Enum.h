#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimatingFloat_WrapType__Enum {
        namespace {
            app::AnimatingFloat_WrapType__Enum__Class* type_info_ref = nullptr;
        }
        app::AnimatingFloat_WrapType__Enum__Class** type_info = &type_info_ref;
        inline app::AnimatingFloat_WrapType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimatingFloat_WrapType__Enum__Class>(type_info, "", "AnimatingFloat", "WrapType");
        }
        inline app::AnimatingFloat_WrapType__Enum* create() {
            return il2cpp::create_object<app::AnimatingFloat_WrapType__Enum>(get_class());
        }
    } // namespace AnimatingFloat_WrapType__Enum
} // namespace app::classes::types
