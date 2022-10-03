#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventProvider_EventDataPtr {
        namespace {
            app::EventProvider_EventDataPtr__Class* type_info_ref = nullptr;
        }
        app::EventProvider_EventDataPtr__Class** type_info = &type_info_ref;
        inline app::EventProvider_EventDataPtr__Class* get_class() {
            return il2cpp::get_class<app::EventProvider_EventDataPtr__Class>(type_info, "System.Diagnostics.Tracing", "EventProvider+EventData*");
        }
        inline app::EventProvider_EventDataPtr* create() {
            return il2cpp::create_object<app::EventProvider_EventDataPtr>(get_class());
        }
    } // namespace EventProvider_EventDataPtr
} // namespace app::classes::types
