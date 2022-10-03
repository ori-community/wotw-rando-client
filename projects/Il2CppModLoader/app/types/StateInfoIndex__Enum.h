#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateInfoIndex__Enum {
        namespace {
            app::StateInfoIndex__Enum__Class* type_info_ref = nullptr;
        }
        app::StateInfoIndex__Enum__Class** type_info = &type_info_ref;
        inline app::StateInfoIndex__Enum__Class* get_class() {
            return il2cpp::get_class<app::StateInfoIndex__Enum__Class>(type_info, "UnityEngine", "StateInfoIndex");
        }
        inline app::StateInfoIndex__Enum* create() {
            return il2cpp::create_object<app::StateInfoIndex__Enum>(get_class());
        }
    } // namespace StateInfoIndex__Enum
} // namespace app::classes::types
