#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IEventDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IEventDescriptor__Class** type_info;
        inline app::IEventDescriptor__Class* get_class() {
            return il2cpp::get_class<app::IEventDescriptor__Class>(type_info, "Moon.Timeline", "IEventDescriptor");
        }
        inline app::IEventDescriptor* create() {
            return il2cpp::create_object<app::IEventDescriptor>(get_class());
        }
        inline app::IEventDescriptor__Array* create_array(int size) {
            return il2cpp::array_new<app::IEventDescriptor__Array>(get_class(), size);
        }
    } // namespace IEventDescriptor
} // namespace app::classes::types
