#pragma once
#include <Modloader/app/structs/DatadogRegularEvent.h>
#include <Modloader/app/structs/DatadogRegularEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DatadogRegularEvent {
        inline app::DatadogRegularEvent__Class** type_info() {
            static app::DatadogRegularEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DatadogRegularEvent__Class**)(modloader::win::memory::resolve_rva(0x0474C970));
            }
            return cache;
        }
        inline app::DatadogRegularEvent__Class* get_class() {
            return il2cpp::get_class<app::DatadogRegularEvent__Class>(type_info(), "", "DatadogRegularEvent");
        }
        inline app::DatadogRegularEvent* create() {
            return il2cpp::create_object<app::DatadogRegularEvent>(get_class());
        }
    } // namespace DatadogRegularEvent
} // namespace app::classes::types
