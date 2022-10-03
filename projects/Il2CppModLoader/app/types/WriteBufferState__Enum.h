#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WriteBufferState__Enum {
        namespace {
            app::WriteBufferState__Enum__Class* type_info_ref = nullptr;
        }
        app::WriteBufferState__Enum__Class** type_info = &type_info_ref;
        inline app::WriteBufferState__Enum__Class* get_class() {
            return il2cpp::get_class<app::WriteBufferState__Enum__Class>(type_info, "System.Net", "WriteBufferState");
        }
        inline app::WriteBufferState__Enum* create() {
            return il2cpp::create_object<app::WriteBufferState__Enum>(get_class());
        }
    } // namespace WriteBufferState__Enum
} // namespace app::classes::types
