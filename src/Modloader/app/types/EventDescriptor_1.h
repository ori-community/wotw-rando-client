#pragma once
#include <Modloader/app/structs/EventDescriptor_1.h>
#include <Modloader/app/structs/EventDescriptor_1__Array.h>
#include <Modloader/app/structs/EventDescriptor_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventDescriptor_1 {
        inline app::EventDescriptor_1__Class** type_info() {
            static app::EventDescriptor_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventDescriptor_1__Class**)(modloader::win::memory::resolve_rva(0x04781B78));
            }
            return cache;
        }
        inline app::EventDescriptor_1__Class* get_class() {
            return il2cpp::get_class<app::EventDescriptor_1__Class>(type_info(), "System.ComponentModel", "EventDescriptor");
        }
        inline app::EventDescriptor_1* create() {
            return il2cpp::create_object<app::EventDescriptor_1>(get_class());
        }
        inline app::EventDescriptor_1__Array* create_array(int size) {
            return il2cpp::array_new<app::EventDescriptor_1__Array>(get_class(), size);
        }
        inline app::EventDescriptor_1__Array* create_array(const std::vector<app::EventDescriptor_1*>& items) {
            return il2cpp::array_new<app::EventDescriptor_1__Array>(get_class(), items);
        }
    } // namespace EventDescriptor_1
} // namespace app::classes::types
