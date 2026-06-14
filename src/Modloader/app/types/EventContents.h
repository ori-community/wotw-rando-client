#pragma once
#include <Modloader/app/structs/EventContents.h>
#include <Modloader/app/structs/EventContents__Array.h>
#include <Modloader/app/structs/EventContents__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventContents {
        inline app::EventContents__Class** type_info() {
            static app::EventContents__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventContents__Class**)(modloader::win::memory::resolve_rva(0x0474DC30));
            }
            return cache;
        }
        inline app::EventContents__Class* get_class() {
            return il2cpp::get_class<app::EventContents__Class>(type_info(), "PlayFab.EventsModels", "EventContents");
        }
        inline app::EventContents* create() {
            return il2cpp::create_object<app::EventContents>(get_class());
        }
        inline app::EventContents__Array* create_array(int size) {
            return il2cpp::array_new<app::EventContents__Array>(get_class(), size);
        }
        inline app::EventContents__Array* create_array(const std::vector<app::EventContents*>& items) {
            return il2cpp::array_new<app::EventContents__Array>(get_class(), items);
        }
    } // namespace EventContents
} // namespace app::classes::types
