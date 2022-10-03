#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventDescriptor__Class** type_info;
        inline app::EventDescriptor__Class* get_class() {
            return il2cpp::get_class<app::EventDescriptor__Class>(type_info, "System.Diagnostics.Tracing", "EventDescriptor");
        }
        inline app::EventDescriptor* create() {
            return il2cpp::create_object<app::EventDescriptor>(get_class());
        }
        inline app::EventDescriptor__Boxed* box(app::EventDescriptor value) {
            return il2cpp::box_value<app::EventDescriptor__Boxed>(get_class(), value);
        }
    } // namespace EventDescriptor
} // namespace app::classes::types
