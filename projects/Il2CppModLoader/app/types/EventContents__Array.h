#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventContents__Array {
        namespace {
            app::EventContents__Array__Class* type_info_ref = nullptr;
        }
        app::EventContents__Array__Class** type_info = &type_info_ref;
        inline app::EventContents__Array__Class* get_class() {
            return il2cpp::get_class<app::EventContents__Array__Class>(type_info, "PlayFab.EventsModels", "EventContents[]");
        }
        inline app::EventContents__Array* create() {
            return il2cpp::create_object<app::EventContents__Array>(get_class());
        }
    } // namespace EventContents__Array
} // namespace app::classes::types
