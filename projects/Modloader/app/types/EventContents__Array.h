#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EventContents__Array__Class.h>
#include <Modloader/app/structs/EventContents__Array.h>

namespace app::classes::types {
    namespace EventContents__Array {
        namespace {
            inline app::EventContents__Array__Class* type_info_ref = nullptr;
        }
        inline app::EventContents__Array__Class** type_info = &type_info_ref;
        inline app::EventContents__Array__Class* get_class() {
            return il2cpp::get_class<app::EventContents__Array__Class>(type_info, "PlayFab.EventsModels", "EventContents[]");
        }
        inline app::EventContents__Array* create() {
            return il2cpp::create_object<app::EventContents__Array>(get_class());
        }
    } // namespace EventContents__Array
} // namespace app::classes::types
