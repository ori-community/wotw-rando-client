#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDynamicMessageSink {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDynamicMessageSink__Class** type_info;
        inline app::IDynamicMessageSink__Class* get_class() {
            return il2cpp::get_class<app::IDynamicMessageSink__Class>(type_info, "System.Runtime.Remoting.Contexts", "IDynamicMessageSink");
        }
        inline app::IDynamicMessageSink* create() {
            return il2cpp::create_object<app::IDynamicMessageSink>(get_class());
        }
    } // namespace IDynamicMessageSink
} // namespace app::classes::types
