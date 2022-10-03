#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventDescriptor_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventDescriptor_1__Class** type_info;
        inline app::EventDescriptor_1__Class* get_class() {
            return il2cpp::get_class<app::EventDescriptor_1__Class>(type_info, "System.ComponentModel", "EventDescriptor");
        }
        inline app::EventDescriptor_1* create() {
            return il2cpp::create_object<app::EventDescriptor_1>(get_class());
        }
        inline app::EventDescriptor_1__Array* create_array(int size) {
            return il2cpp::array_new<app::EventDescriptor_1__Array>(get_class(), size);
        }
    } // namespace EventDescriptor_1
} // namespace app::classes::types
