#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CloseExState__Enum {
        namespace {
            app::CloseExState__Enum__Class* type_info_ref = nullptr;
        }
        app::CloseExState__Enum__Class** type_info = &type_info_ref;
        inline app::CloseExState__Enum__Class* get_class() {
            return il2cpp::get_class<app::CloseExState__Enum__Class>(type_info, "System.Net", "CloseExState");
        }
        inline app::CloseExState__Enum* create() {
            return il2cpp::create_object<app::CloseExState__Enum>(get_class());
        }
    } // namespace CloseExState__Enum
} // namespace app::classes::types
