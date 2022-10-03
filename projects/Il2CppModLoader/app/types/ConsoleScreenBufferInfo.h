#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConsoleScreenBufferInfo {
        namespace {
            app::ConsoleScreenBufferInfo__Class* type_info_ref = nullptr;
        }
        app::ConsoleScreenBufferInfo__Class** type_info = &type_info_ref;
        inline app::ConsoleScreenBufferInfo__Class* get_class() {
            return il2cpp::get_class<app::ConsoleScreenBufferInfo__Class>(type_info, "System", "ConsoleScreenBufferInfo");
        }
        inline app::ConsoleScreenBufferInfo* create() {
            return il2cpp::create_object<app::ConsoleScreenBufferInfo>(get_class());
        }
        inline app::ConsoleScreenBufferInfo__Boxed* box(app::ConsoleScreenBufferInfo value) {
            return il2cpp::box_value<app::ConsoleScreenBufferInfo__Boxed>(get_class(), value);
        }
    } // namespace ConsoleScreenBufferInfo
} // namespace app::classes::types
