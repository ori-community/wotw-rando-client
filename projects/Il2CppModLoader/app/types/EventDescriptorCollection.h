#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventDescriptorCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventDescriptorCollection__Class** type_info;
        inline app::EventDescriptorCollection__Class* get_class() {
            return il2cpp::get_class<app::EventDescriptorCollection__Class>(type_info, "System.ComponentModel", "EventDescriptorCollection");
        }
        inline app::EventDescriptorCollection* create() {
            return il2cpp::create_object<app::EventDescriptorCollection>(get_class());
        }
    } // namespace EventDescriptorCollection
} // namespace app::classes::types
