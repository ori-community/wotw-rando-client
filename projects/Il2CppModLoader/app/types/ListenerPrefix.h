#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListenerPrefix {
        inline app::ListenerPrefix__Class** type_info = (app::ListenerPrefix__Class**)(modloader::win::memory::resolve_rva(0x04744868));
        inline app::ListenerPrefix__Class* get_class() {
            return il2cpp::get_class<app::ListenerPrefix__Class>(type_info, "System.Net", "ListenerPrefix");
        }
        inline app::ListenerPrefix* create() {
            return il2cpp::create_object<app::ListenerPrefix>(get_class());
        }
    } // namespace ListenerPrefix
} // namespace app::classes::types
