#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventDescriptorSet {
        inline app::EventDescriptorSet__Class** type_info = (app::EventDescriptorSet__Class**)(modloader::win::memory::resolve_rva(0x047903F0));
        inline app::EventDescriptorSet__Class* get_class() {
            return il2cpp::get_class<app::EventDescriptorSet__Class>(type_info, "Moon.Timeline", "EventDescriptorSet");
        }
        inline app::EventDescriptorSet* create() {
            return il2cpp::create_object<app::EventDescriptorSet>(get_class());
        }
    } // namespace EventDescriptorSet
} // namespace app::classes::types
