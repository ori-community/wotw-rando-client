#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventHistoryItem__Array {
        namespace {
            app::EventHistoryItem__Array__Class* type_info_ref = nullptr;
        }
        app::EventHistoryItem__Array__Class** type_info = &type_info_ref;
        inline app::EventHistoryItem__Array__Class* get_class() {
            return il2cpp::get_class<app::EventHistoryItem__Array__Class>(type_info, "Moon.Timeline", "EventHistoryItem[]");
        }
        inline app::EventHistoryItem__Array* create() {
            return il2cpp::create_object<app::EventHistoryItem__Array>(get_class());
        }
    } // namespace EventHistoryItem__Array
} // namespace app::classes::types
