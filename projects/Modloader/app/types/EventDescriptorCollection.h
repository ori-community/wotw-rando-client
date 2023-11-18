#pragma once
#include <Modloader/app/structs/EventDescriptorCollection.h>
#include <Modloader/app/structs/EventDescriptorCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventDescriptorCollection {
        inline app::EventDescriptorCollection__Class** type_info() {
            static app::EventDescriptorCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventDescriptorCollection__Class**)(modloader::win::memory::resolve_rva(0x04774590));
            }
            return cache;
        }
        inline app::EventDescriptorCollection__Class* get_class() {
            return il2cpp::get_class<app::EventDescriptorCollection__Class>(type_info(), "System.ComponentModel", "EventDescriptorCollection");
        }
        inline app::EventDescriptorCollection* create() {
            return il2cpp::create_object<app::EventDescriptorCollection>(get_class());
        }
    } // namespace EventDescriptorCollection
} // namespace app::classes::types
