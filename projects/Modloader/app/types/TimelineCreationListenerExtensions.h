#pragma once
#include <Modloader/app/structs/TimelineCreationListenerExtensions.h>
#include <Modloader/app/structs/TimelineCreationListenerExtensions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineCreationListenerExtensions {
        inline app::TimelineCreationListenerExtensions__Class** type_info() {
            static app::TimelineCreationListenerExtensions__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimelineCreationListenerExtensions__Class**)(modloader::win::memory::resolve_rva(0x0473D820));
            }
            return cache;
        }
        inline app::TimelineCreationListenerExtensions__Class* get_class() {
            return il2cpp::get_class<app::TimelineCreationListenerExtensions__Class>(type_info(), "Moon.Timeline", "TimelineCreationListenerExtensions");
        }
        inline app::TimelineCreationListenerExtensions* create() {
            return il2cpp::create_object<app::TimelineCreationListenerExtensions>(get_class());
        }
    } // namespace TimelineCreationListenerExtensions
} // namespace app::classes::types
