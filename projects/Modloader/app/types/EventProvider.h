#pragma once
#include <Modloader/app/structs/EventProvider.h>
#include <Modloader/app/structs/EventProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventProvider {
        inline app::EventProvider__Class** type_info() {
            static app::EventProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventProvider__Class**)(modloader::win::memory::resolve_rva(0x047516B8));
            }
            return cache;
        }
        inline app::EventProvider__Class* get_class() {
            return il2cpp::get_class<app::EventProvider__Class>(type_info(), "System.Diagnostics.Tracing", "EventProvider");
        }
        inline app::EventProvider* create() {
            return il2cpp::create_object<app::EventProvider>(get_class());
        }
    } // namespace EventProvider
} // namespace app::classes::types
