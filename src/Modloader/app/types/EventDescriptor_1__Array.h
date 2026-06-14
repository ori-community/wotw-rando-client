#pragma once
#include <Modloader/app/structs/EventDescriptor_1__Array.h>
#include <Modloader/app/structs/EventDescriptor_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventDescriptor_1__Array {
        inline app::EventDescriptor_1__Array__Class** type_info() {
            static app::EventDescriptor_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventDescriptor_1__Array__Class**)(modloader::win::memory::resolve_rva(0x047715D0));
            }
            return cache;
        }
        inline app::EventDescriptor_1__Array__Class* get_class() {
            return il2cpp::get_class<app::EventDescriptor_1__Array__Class>(type_info(), "System.ComponentModel", "EventDescriptor[]");
        }
        inline app::EventDescriptor_1__Array* create() {
            return il2cpp::create_object<app::EventDescriptor_1__Array>(get_class());
        }
    } // namespace EventDescriptor_1__Array
} // namespace app::classes::types
