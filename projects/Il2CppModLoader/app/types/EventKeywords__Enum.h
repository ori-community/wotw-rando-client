#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventKeywords__Enum {
        namespace {
            app::EventKeywords__Enum__Class* type_info_ref = nullptr;
        }
        app::EventKeywords__Enum__Class** type_info = &type_info_ref;
        inline app::EventKeywords__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventKeywords__Enum__Class>(type_info, "System.Diagnostics.Tracing", "EventKeywords");
        }
        inline app::EventKeywords__Enum* create() {
            return il2cpp::create_object<app::EventKeywords__Enum>(get_class());
        }
    } // namespace EventKeywords__Enum
} // namespace app::classes::types
