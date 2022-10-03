#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventTags__Enum {
        namespace {
            app::EventTags__Enum__Class* type_info_ref = nullptr;
        }
        app::EventTags__Enum__Class** type_info = &type_info_ref;
        inline app::EventTags__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventTags__Enum__Class>(type_info, "System.Diagnostics.Tracing", "EventTags");
        }
        inline app::EventTags__Enum* create() {
            return il2cpp::create_object<app::EventTags__Enum>(get_class());
        }
    } // namespace EventTags__Enum
} // namespace app::classes::types
