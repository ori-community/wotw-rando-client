#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnvoyTerminatorSink {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnvoyTerminatorSink__Class** type_info;
        inline app::EnvoyTerminatorSink__Class* get_class() {
            return il2cpp::get_class<app::EnvoyTerminatorSink__Class>(type_info, "System.Runtime.Remoting.Messaging", "EnvoyTerminatorSink");
        }
        inline app::EnvoyTerminatorSink* create() {
            return il2cpp::create_object<app::EnvoyTerminatorSink>(get_class());
        }
    } // namespace EnvoyTerminatorSink
} // namespace app::classes::types
