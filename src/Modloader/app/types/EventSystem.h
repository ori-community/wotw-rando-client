#pragma once
#include <Modloader/app/structs/EventSystem.h>
#include <Modloader/app/structs/EventSystem__Array.h>
#include <Modloader/app/structs/EventSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventSystem {
        inline app::EventSystem__Class** type_info() {
            static app::EventSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventSystem__Class**)(modloader::win::memory::resolve_rva(0x04780620));
            }
            return cache;
        }
        inline app::EventSystem__Class* get_class() {
            return il2cpp::get_class<app::EventSystem__Class>(type_info(), "UnityEngine.EventSystems", "EventSystem");
        }
        inline app::EventSystem* create() {
            return il2cpp::create_object<app::EventSystem>(get_class());
        }
        inline app::EventSystem__Array* create_array(int size) {
            return il2cpp::array_new<app::EventSystem__Array>(get_class(), size);
        }
        inline app::EventSystem__Array* create_array(const std::vector<app::EventSystem*>& items) {
            return il2cpp::array_new<app::EventSystem__Array>(get_class(), items);
        }
    } // namespace EventSystem
} // namespace app::classes::types
