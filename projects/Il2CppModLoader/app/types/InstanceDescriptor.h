#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InstanceDescriptor {
        inline app::InstanceDescriptor__Class** type_info = (app::InstanceDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04710E20));
        inline app::InstanceDescriptor__Class* get_class() {
            return il2cpp::get_class<app::InstanceDescriptor__Class>(type_info, "System.ComponentModel.Design.Serialization", "InstanceDescriptor");
        }
        inline app::InstanceDescriptor* create() {
            return il2cpp::create_object<app::InstanceDescriptor>(get_class());
        }
    } // namespace InstanceDescriptor
} // namespace app::classes::types
