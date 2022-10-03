#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventChannel__Enum {
        namespace {
            app::EventChannel__Enum__Class* type_info_ref = nullptr;
        }
        app::EventChannel__Enum__Class** type_info = &type_info_ref;
        inline app::EventChannel__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventChannel__Enum__Class>(type_info, "System.Diagnostics.Tracing", "EventChannel");
        }
        inline app::EventChannel__Enum* create() {
            return il2cpp::create_object<app::EventChannel__Enum>(get_class());
        }
    } // namespace EventChannel__Enum
} // namespace app::classes::types
