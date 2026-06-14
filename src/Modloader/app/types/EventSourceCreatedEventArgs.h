#pragma once
#include <Modloader/app/structs/EventSourceCreatedEventArgs.h>
#include <Modloader/app/structs/EventSourceCreatedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventSourceCreatedEventArgs {
        inline app::EventSourceCreatedEventArgs__Class** type_info() {
            static app::EventSourceCreatedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventSourceCreatedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04719D30));
            }
            return cache;
        }
        inline app::EventSourceCreatedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::EventSourceCreatedEventArgs__Class>(type_info(), "System.Diagnostics.Tracing", "EventSourceCreatedEventArgs");
        }
        inline app::EventSourceCreatedEventArgs* create() {
            return il2cpp::create_object<app::EventSourceCreatedEventArgs>(get_class());
        }
    } // namespace EventSourceCreatedEventArgs
} // namespace app::classes::types
