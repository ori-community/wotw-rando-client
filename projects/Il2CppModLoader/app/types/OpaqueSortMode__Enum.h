#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OpaqueSortMode__Enum {
        namespace {
            app::OpaqueSortMode__Enum__Class* type_info_ref = nullptr;
        }
        app::OpaqueSortMode__Enum__Class** type_info = &type_info_ref;
        inline app::OpaqueSortMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::OpaqueSortMode__Enum__Class>(type_info, "UnityEngine.Rendering", "OpaqueSortMode");
        }
        inline app::OpaqueSortMode__Enum* create() {
            return il2cpp::create_object<app::OpaqueSortMode__Enum>(get_class());
        }
    } // namespace OpaqueSortMode__Enum
} // namespace app::classes::types
