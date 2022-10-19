#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StaticEventDescriptor {
        inline app::StaticEventDescriptor__Class** type_info = (app::StaticEventDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0474E028));
        inline app::StaticEventDescriptor__Class* get_class() {
            return il2cpp::get_class<app::StaticEventDescriptor__Class>(type_info, "Moon.Timeline", "StaticEventDescriptor");
        }
        inline app::StaticEventDescriptor* create() {
            return il2cpp::create_object<app::StaticEventDescriptor>(get_class());
        }
    } // namespace StaticEventDescriptor
} // namespace app::classes::types
