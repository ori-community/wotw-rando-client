#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContextCallbackObject {
        inline app::ContextCallbackObject__Class** type_info = (app::ContextCallbackObject__Class**)(modloader::win::memory::resolve_rva(0x0471BDE0));
        inline app::ContextCallbackObject__Class* get_class() {
            return il2cpp::get_class<app::ContextCallbackObject__Class>(type_info, "System.Runtime.Remoting.Contexts", "ContextCallbackObject");
        }
        inline app::ContextCallbackObject* create() {
            return il2cpp::create_object<app::ContextCallbackObject>(get_class());
        }
    } // namespace ContextCallbackObject
} // namespace app::classes::types
