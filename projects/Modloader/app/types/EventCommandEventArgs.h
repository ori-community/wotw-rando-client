#pragma once
#include <Modloader/app/structs/EventCommandEventArgs.h>
#include <Modloader/app/structs/EventCommandEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventCommandEventArgs {
        inline app::EventCommandEventArgs__Class** type_info() {
            static app::EventCommandEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventCommandEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04754B08));
            }
            return cache;
        }
        inline app::EventCommandEventArgs__Class* get_class() {
            return il2cpp::get_class<app::EventCommandEventArgs__Class>(type_info(), "System.Diagnostics.Tracing", "EventCommandEventArgs");
        }
        inline app::EventCommandEventArgs* create() {
            return il2cpp::create_object<app::EventCommandEventArgs>(get_class());
        }
    } // namespace EventCommandEventArgs
} // namespace app::classes::types
