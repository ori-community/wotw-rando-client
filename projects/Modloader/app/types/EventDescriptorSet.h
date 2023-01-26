#pragma once
#include <Modloader/app/structs/EventDescriptorSet.h>
#include <Modloader/app/structs/EventDescriptorSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventDescriptorSet {
        inline app::EventDescriptorSet__Class** type_info() {
            static app::EventDescriptorSet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventDescriptorSet__Class**)(modloader::win::memory::resolve_rva(0x047903F0));
            }
            return cache;
        }
        inline app::EventDescriptorSet__Class* get_class() {
            return il2cpp::get_class<app::EventDescriptorSet__Class>(type_info(), "Moon.Timeline", "EventDescriptorSet");
        }
        inline app::EventDescriptorSet* create() {
            return il2cpp::create_object<app::EventDescriptorSet>(get_class());
        }
    } // namespace EventDescriptorSet
} // namespace app::classes::types
