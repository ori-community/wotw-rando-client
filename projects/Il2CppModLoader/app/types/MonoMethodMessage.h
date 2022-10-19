#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoMethodMessage {
        inline app::MonoMethodMessage__Class** type_info = (app::MonoMethodMessage__Class**)(modloader::win::memory::resolve_rva(0x0470F938));
        inline app::MonoMethodMessage__Class* get_class() {
            return il2cpp::get_class<app::MonoMethodMessage__Class>(type_info, "System.Runtime.Remoting.Messaging", "MonoMethodMessage");
        }
        inline app::MonoMethodMessage* create() {
            return il2cpp::create_object<app::MonoMethodMessage>(get_class());
        }
    } // namespace MonoMethodMessage
} // namespace app::classes::types
