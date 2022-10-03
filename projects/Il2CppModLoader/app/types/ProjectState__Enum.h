#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProjectState__Enum {
        namespace {
            app::ProjectState__Enum__Class* type_info_ref = nullptr;
        }
        app::ProjectState__Enum__Class** type_info = &type_info_ref;
        inline app::ProjectState__Enum__Class* get_class() {
            return il2cpp::get_class<app::ProjectState__Enum__Class>(type_info, "", "ProjectState");
        }
        inline app::ProjectState__Enum* create() {
            return il2cpp::create_object<app::ProjectState__Enum>(get_class());
        }
    } // namespace ProjectState__Enum
} // namespace app::classes::types
