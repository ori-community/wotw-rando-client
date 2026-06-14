#pragma once
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/Event_1__Array.h>
#include <Modloader/app/structs/Event_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Event_1 {
        inline app::Event_1__Class** type_info() {
            static app::Event_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Event_1__Class**)(modloader::win::memory::resolve_rva(0x04724568));
            }
            return cache;
        }
        inline app::Event_1__Class* get_class() {
            return il2cpp::get_class<app::Event_1__Class>(type_info(), "AK.Wwise", "Event");
        }
        inline app::Event_1* create() {
            return il2cpp::create_object<app::Event_1>(get_class());
        }
        inline app::Event_1__Array* create_array(int size) {
            return il2cpp::array_new<app::Event_1__Array>(get_class(), size);
        }
        inline app::Event_1__Array* create_array(const std::vector<app::Event_1*>& items) {
            return il2cpp::array_new<app::Event_1__Array>(get_class(), items);
        }
    } // namespace Event_1
} // namespace app::classes::types
