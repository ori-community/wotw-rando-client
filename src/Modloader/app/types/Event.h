#pragma once
#include <Modloader/app/structs/Event.h>
#include <Modloader/app/structs/Event__Array.h>
#include <Modloader/app/structs/Event__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Event {
        inline app::Event__Class** type_info() {
            static app::Event__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Event__Class**)(modloader::win::memory::resolve_rva(0x04747B50));
            }
            return cache;
        }
        inline app::Event__Class* get_class() {
            return il2cpp::get_class<app::Event__Class>(type_info(), "UnityEngine", "Event");
        }
        inline app::Event* create() {
            return il2cpp::create_object<app::Event>(get_class());
        }
        inline app::Event__Array* create_array(int size) {
            return il2cpp::array_new<app::Event__Array>(get_class(), size);
        }
        inline app::Event__Array* create_array(const std::vector<app::Event*>& items) {
            return il2cpp::array_new<app::Event__Array>(get_class(), items);
        }
    } // namespace Event
} // namespace app::classes::types
