#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrossContextChannel_ContextRestoreSink {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CrossContextChannel_ContextRestoreSink__Class** type_info;
        inline app::CrossContextChannel_ContextRestoreSink__Class* get_class() {
            return il2cpp::get_nested_class<app::CrossContextChannel_ContextRestoreSink__Class>(type_info, "System.Runtime.Remoting.Contexts", "CrossContextChannel", "ContextRestoreSink");
        }
        inline app::CrossContextChannel_ContextRestoreSink* create() {
            return il2cpp::create_object<app::CrossContextChannel_ContextRestoreSink>(get_class());
        }
    } // namespace CrossContextChannel_ContextRestoreSink
} // namespace app::classes::types
