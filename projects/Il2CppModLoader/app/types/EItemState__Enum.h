#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EItemState__Enum {
        namespace {
            app::EItemState__Enum__Class* type_info_ref = nullptr;
        }
        app::EItemState__Enum__Class** type_info = &type_info_ref;
        inline app::EItemState__Enum__Class* get_class() {
            return il2cpp::get_class<app::EItemState__Enum__Class>(type_info, "Steamworks", "EItemState");
        }
        inline app::EItemState__Enum* create() {
            return il2cpp::create_object<app::EItemState__Enum>(get_class());
        }
    } // namespace EItemState__Enum
} // namespace app::classes::types
