#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StaticEventDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StaticEventDescriptor__Class** type_info;
        inline app::StaticEventDescriptor__Class* get_class() {
            return il2cpp::get_class<app::StaticEventDescriptor__Class>(type_info, "Moon.Timeline", "StaticEventDescriptor");
        }
        inline app::StaticEventDescriptor* create() {
            return il2cpp::create_object<app::StaticEventDescriptor>(get_class());
        }
    } // namespace StaticEventDescriptor
} // namespace app::classes::types
