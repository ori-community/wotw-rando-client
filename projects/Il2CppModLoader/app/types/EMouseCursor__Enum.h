#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EMouseCursor__Enum {
        namespace {
            app::EMouseCursor__Enum__Class* type_info_ref = nullptr;
        }
        app::EMouseCursor__Enum__Class** type_info = &type_info_ref;
        inline app::EMouseCursor__Enum__Class* get_class() {
            return il2cpp::get_class<app::EMouseCursor__Enum__Class>(type_info, "Steamworks", "EMouseCursor");
        }
        inline app::EMouseCursor__Enum* create() {
            return il2cpp::create_object<app::EMouseCursor__Enum>(get_class());
        }
    } // namespace EMouseCursor__Enum
} // namespace app::classes::types
