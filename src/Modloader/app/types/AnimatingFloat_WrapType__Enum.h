#pragma once
#include <Modloader/app/structs/AnimatingFloat_WrapType__Enum.h>
#include <Modloader/app/structs/AnimatingFloat_WrapType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatingFloat_WrapType__Enum {
        inline app::AnimatingFloat_WrapType__Enum__Class** type_info() {
            static app::AnimatingFloat_WrapType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatingFloat_WrapType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatingFloat_WrapType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimatingFloat_WrapType__Enum__Class>(type_info(), "", "AnimatingFloat", "WrapType");
        }
        inline app::AnimatingFloat_WrapType__Enum* create() {
            return il2cpp::create_object<app::AnimatingFloat_WrapType__Enum>(get_class());
        }
    } // namespace AnimatingFloat_WrapType__Enum
} // namespace app::classes::types
