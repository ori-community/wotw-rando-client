#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContextCallbackObject {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ContextCallbackObject__Class** type_info;
        inline app::ContextCallbackObject__Class* get_class() {
            return il2cpp::get_class<app::ContextCallbackObject__Class>(type_info, "System.Runtime.Remoting.Contexts", "ContextCallbackObject");
        }
        inline app::ContextCallbackObject* create() {
            return il2cpp::create_object<app::ContextCallbackObject>(get_class());
        }
    } // namespace ContextCallbackObject
} // namespace app::classes::types
