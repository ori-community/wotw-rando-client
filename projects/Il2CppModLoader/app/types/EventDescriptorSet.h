#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventDescriptorSet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventDescriptorSet__Class** type_info;
        inline app::EventDescriptorSet__Class* get_class() {
            return il2cpp::get_class<app::EventDescriptorSet__Class>(type_info, "Moon.Timeline", "EventDescriptorSet");
        }
        inline app::EventDescriptorSet* create() {
            return il2cpp::create_object<app::EventDescriptorSet>(get_class());
        }
    } // namespace EventDescriptorSet
} // namespace app::classes::types
