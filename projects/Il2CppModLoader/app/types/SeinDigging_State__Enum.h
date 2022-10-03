#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDigging_State__Enum {
        namespace {
            app::SeinDigging_State__Enum__Class* type_info_ref = nullptr;
        }
        app::SeinDigging_State__Enum__Class** type_info = &type_info_ref;
        inline app::SeinDigging_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDigging_State__Enum__Class>(type_info, "", "SeinDigging", "State");
        }
        inline app::SeinDigging_State__Enum* create() {
            return il2cpp::create_object<app::SeinDigging_State__Enum>(get_class());
        }
    } // namespace SeinDigging_State__Enum
} // namespace app::classes::types
