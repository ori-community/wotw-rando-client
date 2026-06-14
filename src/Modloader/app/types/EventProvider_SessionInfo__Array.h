#pragma once
#include <Modloader/app/structs/EventProvider_SessionInfo__Array.h>
#include <Modloader/app/structs/EventProvider_SessionInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventProvider_SessionInfo__Array {
        inline app::EventProvider_SessionInfo__Array__Class** type_info() {
            static app::EventProvider_SessionInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventProvider_SessionInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventProvider_SessionInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::EventProvider_SessionInfo__Array__Class>(type_info(), "System.Diagnostics.Tracing", "EventProvider+SessionInfo[]");
        }
        inline app::EventProvider_SessionInfo__Array* create() {
            return il2cpp::create_object<app::EventProvider_SessionInfo__Array>(get_class());
        }
    } // namespace EventProvider_SessionInfo__Array
} // namespace app::classes::types
