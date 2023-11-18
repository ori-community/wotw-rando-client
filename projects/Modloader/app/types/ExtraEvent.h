#pragma once
#include <Modloader/app/structs/ExtraEvent.h>
#include <Modloader/app/structs/ExtraEvent__Array.h>
#include <Modloader/app/structs/ExtraEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExtraEvent {
        inline app::ExtraEvent__Class** type_info() {
            static app::ExtraEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExtraEvent__Class**)(modloader::win::memory::resolve_rva(0x04791DB0));
            }
            return cache;
        }
        inline app::ExtraEvent__Class* get_class() {
            return il2cpp::get_class<app::ExtraEvent__Class>(type_info(), "PhysicsDebugTools", "ExtraEvent");
        }
        inline app::ExtraEvent* create() {
            return il2cpp::create_object<app::ExtraEvent>(get_class());
        }
        inline app::ExtraEvent__Array* create_array(int size) {
            return il2cpp::array_new<app::ExtraEvent__Array>(get_class(), size);
        }
        inline app::ExtraEvent__Array* create_array(const std::vector<app::ExtraEvent*>& items) {
            return il2cpp::array_new<app::ExtraEvent__Array>(get_class(), items);
        }
    } // namespace ExtraEvent
} // namespace app::classes::types
